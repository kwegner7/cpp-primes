#include "incl/Process.h"
#include "incl/Thread.h"
#include "incl/SharedResources.h"
#include <thread>
#include <vector>
#include <set>
#include <algorithm>

/*
    https://www.geeksforgeeks.org/thread-functions-in-c-c/
    https://cplusplus.com/reference/thread/thread/
    https://cplusplus.com/reference/multithreading/
    https://cplusplus.com/reference/mutex/mutex/
    https://www.geeksforgeeks.org/set-in-cpp-stl/
*/

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
namespace SharedResources
{
  std::set<unsigned> primeNumbersSet;
  std::mutex primeNumbersMutex;
  std::mutex conditionVariableMutex;
  std::condition_variable conditionVariable;
  unsigned countThreadsFinished;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
Process::Process()
{}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
ProcessPrimes::ProcessPrimes()
:
  Process()
{}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
void ProcessPrimes::start()
{
  std::thread::id mainThreadId = std::this_thread::get_id();
  std::cerr << "\nMain thread " 
            << mainThreadId << " has started"
            << std::endl;
  /*
   * Initialize
   */
  SharedResources::primeNumbersSet.clear();
  SharedResources::primeNumbersMutex.unlock();
  SharedResources::conditionVariableMutex.unlock();
  SharedResources::countThreadsFinished = 0;

  /*
   * Start a thread for first 10 primes
   */
  std::thread threadPrime2(ThreadPrimes::findNotPrimes, 2);
  std::thread threadPrime3(ThreadPrimes::findNotPrimes, 3);
  std::thread threadPrime5(ThreadPrimes::findNotPrimes, 5);
  std::thread threadPrime7(ThreadPrimes::findNotPrimes, 7);
  #if 1
  std::thread threadPrime11(ThreadPrimes::findNotPrimes, 11);
  std::thread threadPrime13(ThreadPrimes::findNotPrimes, 13);
  std::thread threadPrime17(ThreadPrimes::findNotPrimes, 17);
  std::thread threadPrime19(ThreadPrimes::findNotPrimes, 19);
  std::thread threadPrime23(ThreadPrimes::findNotPrimes, 23);
  std::thread threadPrime29(ThreadPrimes::findNotPrimes, 29);
  std::thread threadPrime31(ThreadPrimes::findNotPrimes, 31);
  std::thread threadPrime37(ThreadPrimes::findNotPrimes, 37);
  std::thread threadPrime41(ThreadPrimes::findNotPrimes, 41);
  std::thread threadPrime43(ThreadPrimes::findNotPrimes, 43);
  std::thread threadPrime47(ThreadPrimes::findNotPrimes, 47);
  std::thread threadPrime53(ThreadPrimes::findNotPrimes, 53);
  std::thread threadPrime59(ThreadPrimes::findNotPrimes, 59);
  std::thread threadPrime61(ThreadPrimes::findNotPrimes, 61);
  std::thread threadPrime67(ThreadPrimes::findNotPrimes, 67);
  std::thread threadPrime71(ThreadPrimes::findNotPrimes, 71);
  std::thread threadPrime73(ThreadPrimes::findNotPrimes, 73);
  std::thread threadPrime79(ThreadPrimes::findNotPrimes, 79);
  std::thread threadPrime83(ThreadPrimes::findNotPrimes, 83);
  std::thread threadPrime89(ThreadPrimes::findNotPrimes, 89);
  std::thread threadPrime97(ThreadPrimes::findNotPrimes, 97);
  #endif
  std::thread results(ThreadPrimes::showResults);

  /*
   * Wait for all threads to complete
   */
  threadPrime2.join();
  threadPrime3.join();
  threadPrime5.join();
  threadPrime7.join();
  #if 1
  threadPrime11.join();
  threadPrime13.join();
  threadPrime17.join();
  threadPrime19.join();
  threadPrime23.join();
  threadPrime29.join();
  threadPrime31.join();
  threadPrime37.join();
  threadPrime41.join();
  threadPrime43.join();
  threadPrime47.join();
  threadPrime53.join();
  threadPrime59.join();
  threadPrime61.join();
  threadPrime67.join();
  threadPrime71.join();
  threadPrime73.join();
  threadPrime79.join();
  threadPrime83.join();
  threadPrime89.join();
  threadPrime97.join();
  #endif
  results.join();

  mainThreadId = std::this_thread::get_id();
  std::cerr << "\nMain thread " 
            << mainThreadId << " has finished\n"
            << std::endl;

}



