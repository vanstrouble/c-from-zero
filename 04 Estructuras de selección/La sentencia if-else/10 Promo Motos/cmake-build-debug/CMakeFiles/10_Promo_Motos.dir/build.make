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
CMAKE_SOURCE_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/10_Promo_Motos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/10_Promo_Motos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/10_Promo_Motos.dir/flags.make

CMakeFiles/10_Promo_Motos.dir/10_Promo_Motos.c.o: CMakeFiles/10_Promo_Motos.dir/flags.make
CMakeFiles/10_Promo_Motos.dir/10_Promo_Motos.c.o: ../10\ Promo\ Motos.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/10_Promo_Motos.dir/10_Promo_Motos.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/10_Promo_Motos.dir/10_Promo_Motos.c.o   -c "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos/10 Promo Motos.c"

CMakeFiles/10_Promo_Motos.dir/10_Promo_Motos.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/10_Promo_Motos.dir/10_Promo_Motos.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos/10 Promo Motos.c" > CMakeFiles/10_Promo_Motos.dir/10_Promo_Motos.c.i

CMakeFiles/10_Promo_Motos.dir/10_Promo_Motos.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/10_Promo_Motos.dir/10_Promo_Motos.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos/10 Promo Motos.c" -o CMakeFiles/10_Promo_Motos.dir/10_Promo_Motos.c.s

# Object files for target 10_Promo_Motos
10_Promo_Motos_OBJECTS = \
"CMakeFiles/10_Promo_Motos.dir/10_Promo_Motos.c.o"

# External object files for target 10_Promo_Motos
10_Promo_Motos_EXTERNAL_OBJECTS =

10_Promo_Motos: CMakeFiles/10_Promo_Motos.dir/10_Promo_Motos.c.o
10_Promo_Motos: CMakeFiles/10_Promo_Motos.dir/build.make
10_Promo_Motos: CMakeFiles/10_Promo_Motos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 10_Promo_Motos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/10_Promo_Motos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/10_Promo_Motos.dir/build: 10_Promo_Motos

.PHONY : CMakeFiles/10_Promo_Motos.dir/build

CMakeFiles/10_Promo_Motos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/10_Promo_Motos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/10_Promo_Motos.dir/clean

CMakeFiles/10_Promo_Motos.dir/depend:
	cd "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if-else/10 Promo Motos/cmake-build-debug/CMakeFiles/10_Promo_Motos.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/10_Promo_Motos.dir/depend

