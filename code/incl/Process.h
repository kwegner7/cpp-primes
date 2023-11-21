#pragma once

#include <iostream>

class Process
{
  public:

    // constructor
    Process(void);

    // virtual methods
    virtual void start() = 0;
};

class ProcessPrimes : public Process
{
  public:

    // constructor
    ProcessPrimes();

    // virtual methods
    void start() override;
};


