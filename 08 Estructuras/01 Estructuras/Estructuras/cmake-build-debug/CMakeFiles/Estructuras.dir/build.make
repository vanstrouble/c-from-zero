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
CMAKE_SOURCE_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Estructuras.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Estructuras.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Estructuras.dir/flags.make

CMakeFiles/Estructuras.dir/main.c.o: CMakeFiles/Estructuras.dir/flags.make
CMakeFiles/Estructuras.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Estructuras.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Estructuras.dir/main.c.o   -c "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras/main.c"

CMakeFiles/Estructuras.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Estructuras.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras/main.c" > CMakeFiles/Estructuras.dir/main.c.i

CMakeFiles/Estructuras.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Estructuras.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras/main.c" -o CMakeFiles/Estructuras.dir/main.c.s

# Object files for target Estructuras
Estructuras_OBJECTS = \
"CMakeFiles/Estructuras.dir/main.c.o"

# External object files for target Estructuras
Estructuras_EXTERNAL_OBJECTS =

Estructuras: CMakeFiles/Estructuras.dir/main.c.o
Estructuras: CMakeFiles/Estructuras.dir/build.make
Estructuras: CMakeFiles/Estructuras.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Estructuras"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Estructuras.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Estructuras.dir/build: Estructuras

.PHONY : CMakeFiles/Estructuras.dir/build

CMakeFiles/Estructuras.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Estructuras.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Estructuras.dir/clean

CMakeFiles/Estructuras.dir/depend:
	cd "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras" "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras" "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/01 Estructuras/Estructuras/cmake-build-debug/CMakeFiles/Estructuras.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Estructuras.dir/depend

