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
CMAKE_SOURCE_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/04_Multiplos_de_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/04_Multiplos_de_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/04_Multiplos_de_5.dir/flags.make

CMakeFiles/04_Multiplos_de_5.dir/main.c.o: CMakeFiles/04_Multiplos_de_5.dir/flags.make
CMakeFiles/04_Multiplos_de_5.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/04_Multiplos_de_5.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/04_Multiplos_de_5.dir/main.c.o   -c "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5/main.c"

CMakeFiles/04_Multiplos_de_5.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/04_Multiplos_de_5.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5/main.c" > CMakeFiles/04_Multiplos_de_5.dir/main.c.i

CMakeFiles/04_Multiplos_de_5.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/04_Multiplos_de_5.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5/main.c" -o CMakeFiles/04_Multiplos_de_5.dir/main.c.s

# Object files for target 04_Multiplos_de_5
04_Multiplos_de_5_OBJECTS = \
"CMakeFiles/04_Multiplos_de_5.dir/main.c.o"

# External object files for target 04_Multiplos_de_5
04_Multiplos_de_5_EXTERNAL_OBJECTS =

04_Multiplos_de_5: CMakeFiles/04_Multiplos_de_5.dir/main.c.o
04_Multiplos_de_5: CMakeFiles/04_Multiplos_de_5.dir/build.make
04_Multiplos_de_5: CMakeFiles/04_Multiplos_de_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 04_Multiplos_de_5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/04_Multiplos_de_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/04_Multiplos_de_5.dir/build: 04_Multiplos_de_5

.PHONY : CMakeFiles/04_Multiplos_de_5.dir/build

CMakeFiles/04_Multiplos_de_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/04_Multiplos_de_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/04_Multiplos_de_5.dir/clean

CMakeFiles/04_Multiplos_de_5.dir/depend:
	cd "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5" "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5" "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/05 Estructuras de control - Bucles/01 La sentencia while/04 Multiplos de 5/cmake-build-debug/CMakeFiles/04_Multiplos_de_5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/04_Multiplos_de_5.dir/depend
