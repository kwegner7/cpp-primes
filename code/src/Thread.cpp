#include "incl/Thread.h"
#include "incl/SharedResources.h"

#include <thread>
#include <mutex>
#include <condition_variable>
#include <iomanip>

using namespace std::chrono_literals;

namespace
{
  const unsigned maxNumber{10000};
  const unsigned numberThreads{25};
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
void ThreadPrimes::findNotPrimes(const unsigned prime)
{
  std::thread::id thisThreadId = std::this_thread::get_id();
  std::cerr << "Starting thread " << thisThreadId 
            << " to find numbers that are divisible by the prime " << prime << std::endl;
  std::this_thread::sleep_for(500ms);

  /*
   * range vector
   */
  std::vector<unsigned> range; 
  for(size_t i = 2; i <= maxNumber; i++)
  {
    range.push_back(i);
  }

  /*
   * Find all numbers divisible by the prime
   */
  for (auto const& number: range)
  {
    // if the number is divisible by the prime number
    if ((number % prime) == 0)
    {
      // then add to the set of not primes 
      SharedResources::primeNumbersMutex.lock();
      {
        // PROTECTED REGION
        if (number != prime)
        {
          // SharedResources::PrimeNumbers.push_back(number);
          SharedResources::primeNumbersSet.insert(number);
        }
        //END PROTECTED REGION
      }
      SharedResources::primeNumbersMutex.unlock();
    }
    // std::this_thread::sleep_for(20ms);
  }

  std::this_thread::sleep_for(20ms);
  thisThreadId = std::this_thread::get_id();
  std::cerr << "Thread " << thisThreadId 
            << " for prime " << prime 
            << " has finished" << std::endl;
  std::this_thread::sleep_for(500ms);

  SharedResources::primeNumbersMutex.lock();
    if (++SharedResources::countThreadsFinished >= numberThreads)
    {
      /*
       * Send signal indicating that this prime is finished
       * Lock a mutex for the duration of the scoped block
       */
      std::lock_guard<std::mutex>
        guard(SharedResources::conditionVariableMutex);
      SharedResources::conditionVariable.notify_one();
    }
  SharedResources::primeNumbersMutex.unlock();
  return;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
void ThreadPrimes::showResults()
{
  std::thread::id thisThreadId = std::this_thread::get_id();
  std::cerr << "Starting thread " 
            << thisThreadId << " to produce the final results"
            << std::endl;

  /*
   * Wait for the condition variable signal
   */
  std::unique_lock<std::mutex> ul(SharedResources::conditionVariableMutex);
  SharedResources::conditionVariable.wait(ul);

  thisThreadId = std::this_thread::get_id();
  std::cerr << "Results thread " 
            << thisThreadId << " has finished"
            << std::endl;
  std::this_thread::sleep_for(200ms);

  /*
   * Create the universal set, a set of numbers from 2 to 10,000 inclusive
   */
  std::set<unsigned> universal; 
  for(size_t i = 2; i <= maxNumber; i++)
  {
    universal.insert(i);
  }

  /*
   * Find the set difference universal - notPrimeNumbers
   */
  const std::set<unsigned>&
    notPrimeNumbers{ SharedResources::primeNumbersSet };
  std::set<unsigned> dest; 
  dest.clear(); 
  std::set_difference(
    universal.cbegin(), universal.cend(),
    notPrimeNumbers.cbegin(), notPrimeNumbers.cend(),
    std::inserter(dest, dest.begin()));

  /*
   * Show the prime numbers
   */
  std::cerr << "\nThere are " << dest.size() 
            << " prime numbers less than 10,000:" << std::endl;

  unsigned count{0};
  for (auto& prime : dest)
  {
    if (++count%10 == 0) 
      std::cerr << "  " << std::setw(4) << prime << std::endl;
    else
      std::cerr << "  " << std::setw(4) << prime;
  }

  std::cerr << std::endl;

  /*
    There are 25 primes
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 
    71, 73, 79, 83, 89, 97
  */

  return;
}


