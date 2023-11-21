#pragma once

#include <vector>
#include <set>
#include <mutex>
#include <condition_variable>

/*
    https://www.geeksforgeeks.org/namespace-in-c/
*/

namespace SharedResources
{
  extern std::set<unsigned> primeNumbersSet;
  extern std::mutex primeNumbersMutex;
  extern std::mutex conditionVariableMutex;
  extern std::condition_variable conditionVariable;
  extern unsigned countThreadsFinished;
}
