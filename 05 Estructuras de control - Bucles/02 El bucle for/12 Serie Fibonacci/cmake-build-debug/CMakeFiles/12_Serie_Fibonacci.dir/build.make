# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/12_Serie_Fibonacci.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/12_Serie_Fibonacci.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/12_Serie_Fibonacci.dir/flags.make

CMakeFiles/12_Serie_Fibonacci.dir/12_Serie_Fibonacci.c.o: CMakeFiles/12_Serie_Fibonacci.dir/flags.make
CMakeFiles/12_Serie_Fibonacci.dir/12_Serie_Fibonacci.c.o: ../12\ Serie\ Fibonacci.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/12_Serie_Fibonacci.dir/12_Serie_Fibonacci.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/12_Serie_Fibonacci.dir/12_Serie_Fibonacci.c.o   -c "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci/12 Serie Fibonacci.c"

CMakeFiles/12_Serie_Fibonacci.dir/12_Serie_Fibonacci.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/12_Serie_Fibonacci.dir/12_Serie_Fibonacci.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci/12 Serie Fibonacci.c" > CMakeFiles/12_Serie_Fibonacci.dir/12_Serie_Fibonacci.c.i

CMakeFiles/12_Serie_Fibonacci.dir/12_Serie_Fibonacci.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/12_Serie_Fibonacci.dir/12_Serie_Fibonacci.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci/12 Serie Fibonacci.c" -o CMakeFiles/12_Serie_Fibonacci.dir/12_Serie_Fibonacci.c.s

# Object files for target 12_Serie_Fibonacci
12_Serie_Fibonacci_OBJECTS = \
"CMakeFiles/12_Serie_Fibonacci.dir/12_Serie_Fibonacci.c.o"

# External object files for target 12_Serie_Fibonacci
12_Serie_Fibonacci_EXTERNAL_OBJECTS =

12_Serie_Fibonacci: CMakeFiles/12_Serie_Fibonacci.dir/12_Serie_Fibonacci.c.o
12_Serie_Fibonacci: CMakeFiles/12_Serie_Fibonacci.dir/build.make
12_Serie_Fibonacci: CMakeFiles/12_Serie_Fibonacci.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 12_Serie_Fibonacci"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/12_Serie_Fibonacci.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/12_Serie_Fibonacci.dir/build: 12_Serie_Fibonacci

.PHONY : CMakeFiles/12_Serie_Fibonacci.dir/build

CMakeFiles/12_Serie_Fibonacci.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/12_Serie_Fibonacci.dir/cmake_clean.cmake
.PHONY : CMakeFiles/12_Serie_Fibonacci.dir/clean

CMakeFiles/12_Serie_Fibonacci.dir/depend:
	cd "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci" "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci" "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/02 El bucle for/12 Serie Fibonacci/cmake-build-debug/CMakeFiles/12_Serie_Fibonacci.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/12_Serie_Fibonacci.dir/depend

