#pragma once

#include <iostream>

class Thread
{
  public:

    // constructor
    Thread(void) = default;
};

class ThreadPrimes : public Thread
{
  public:

    // constructor
    ThreadPrimes(void) = default;

    // public static methods
    static void findNotPrimes(const unsigned prime);
    static void showResults();
};
