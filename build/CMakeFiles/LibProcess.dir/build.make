# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kurt/repo/data/tutorials/cpp-primes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kurt/repo/data/tutorials/cpp-primes/build

# Include any dependencies generated for this target.
include CMakeFiles/LibProcess.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LibProcess.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LibProcess.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LibProcess.dir/flags.make

CMakeFiles/LibProcess.dir/code/src/Process.cpp.o: CMakeFiles/LibProcess.dir/flags.make
CMakeFiles/LibProcess.dir/code/src/Process.cpp.o: ../code/src/Process.cpp
CMakeFiles/LibProcess.dir/code/src/Process.cpp.o: CMakeFiles/LibProcess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kurt/repo/data/tutorials/cpp-primes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LibProcess.dir/code/src/Process.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibProcess.dir/code/src/Process.cpp.o -MF CMakeFiles/LibProcess.dir/code/src/Process.cpp.o.d -o CMakeFiles/LibProcess.dir/code/src/Process.cpp.o -c /home/kurt/repo/data/tutorials/cpp-primes/code/src/Process.cpp

CMakeFiles/LibProcess.dir/code/src/Process.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LibProcess.dir/code/src/Process.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kurt/repo/data/tutorials/cpp-primes/code/src/Process.cpp > CMakeFiles/LibProcess.dir/code/src/Process.cpp.i

CMakeFiles/LibProcess.dir/code/src/Process.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LibProcess.dir/code/src/Process.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kurt/repo/data/tutorials/cpp-primes/code/src/Process.cpp -o CMakeFiles/LibProcess.dir/code/src/Process.cpp.s

CMakeFiles/LibProcess.dir/code/src/Thread.cpp.o: CMakeFiles/LibProcess.dir/flags.make
CMakeFiles/LibProcess.dir/code/src/Thread.cpp.o: ../code/src/Thread.cpp
CMakeFiles/LibProcess.dir/code/src/Thread.cpp.o: CMakeFiles/LibProcess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kurt/repo/data/tutorials/cpp-primes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LibProcess.dir/code/src/Thread.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LibProcess.dir/code/src/Thread.cpp.o -MF CMakeFiles/LibProcess.dir/code/src/Thread.cpp.o.d -o CMakeFiles/LibProcess.dir/code/src/Thread.cpp.o -c /home/kurt/repo/data/tutorials/cpp-primes/code/src/Thread.cpp

CMakeFiles/LibProcess.dir/code/src/Thread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LibProcess.dir/code/src/Thread.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kurt/repo/data/tutorials/cpp-primes/code/src/Thread.cpp > CMakeFiles/LibProcess.dir/code/src/Thread.cpp.i

CMakeFiles/LibProcess.dir/code/src/Thread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LibProcess.dir/code/src/Thread.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kurt/repo/data/tutorials/cpp-primes/code/src/Thread.cpp -o CMakeFiles/LibProcess.dir/code/src/Thread.cpp.s

CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.o: CMakeFiles/LibProcess.dir/flags.make
CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.o: ../code/src/ThreadFunctions.c
CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.o: CMakeFiles/LibProcess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kurt/repo/data/tutorials/cpp-primes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.o -MF CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.o.d -o CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.o -c /home/kurt/repo/data/tutorials/cpp-primes/code/src/ThreadFunctions.c

CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kurt/repo/data/tutorials/cpp-primes/code/src/ThreadFunctions.c > CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.i

CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kurt/repo/data/tutorials/cpp-primes/code/src/ThreadFunctions.c -o CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.s

# Object files for target LibProcess
LibProcess_OBJECTS = \
"CMakeFiles/LibProcess.dir/code/src/Process.cpp.o" \
"CMakeFiles/LibProcess.dir/code/src/Thread.cpp.o" \
"CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.o"

# External object files for target LibProcess
LibProcess_EXTERNAL_OBJECTS =

lib/libLibProcess.a: CMakeFiles/LibProcess.dir/code/src/Process.cpp.o
lib/libLibProcess.a: CMakeFiles/LibProcess.dir/code/src/Thread.cpp.o
lib/libLibProcess.a: CMakeFiles/LibProcess.dir/code/src/ThreadFunctions.c.o
lib/libLibProcess.a: CMakeFiles/LibProcess.dir/build.make
lib/libLibProcess.a: CMakeFiles/LibProcess.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kurt/repo/data/tutorials/cpp-primes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library lib/libLibProcess.a"
	$(CMAKE_COMMAND) -P CMakeFiles/LibProcess.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LibProcess.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LibProcess.dir/build: lib/libLibProcess.a
.PHONY : CMakeFiles/LibProcess.dir/build

CMakeFiles/LibProcess.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LibProcess.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LibProcess.dir/clean

CMakeFiles/LibProcess.dir/depend:
	cd /home/kurt/repo/data/tutorials/cpp-primes/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kurt/repo/data/tutorials/cpp-primes /home/kurt/repo/data/tutorials/cpp-primes /home/kurt/repo/data/tutorials/cpp-primes/build /home/kurt/repo/data/tutorials/cpp-primes/build /home/kurt/repo/data/tutorials/cpp-primes/build/CMakeFiles/LibProcess.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LibProcess.dir/depend
