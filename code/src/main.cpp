#include "incl/Process.h"

#include <iostream>
#include <unistd.h>

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
namespace
{

  void run()
  {
    std::cout
      << "Running ..."
      << std::endl;

    // Process to determine prime numbers
    std::cerr << "\nFinding Prime Numbers" << std::endl;
    ProcessPrimes process;
    process.start();
  }


} // namespace


//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
int main(int argc, char* argv[])
{
  const unsigned numberArguments(argc);
  std::string arguments;

  // obtain arguments
  for (size_t i(1); i<numberArguments; i++)
  {
	const std::string next(argv[i]);
    arguments.append(" " + next);
  }

  // the executable was invoked from this folder
  char where[256];
  std::cerr << "\n Current Working Directory: "
            << getcwd(where, sizeof(where)) << '\n';
  std::cerr << "   " << arguments << std::endl;

  ::run();
  return 0;
}

