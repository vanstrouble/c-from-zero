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
CMAKE_SOURCE_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/09_Sumar_2_matrices.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/09_Sumar_2_matrices.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/09_Sumar_2_matrices.dir/flags.make

CMakeFiles/09_Sumar_2_matrices.dir/09_Sumar_2_matrices.c.o: CMakeFiles/09_Sumar_2_matrices.dir/flags.make
CMakeFiles/09_Sumar_2_matrices.dir/09_Sumar_2_matrices.c.o: ../09\ Sumar\ 2\ matrices.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/09_Sumar_2_matrices.dir/09_Sumar_2_matrices.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/09_Sumar_2_matrices.dir/09_Sumar_2_matrices.c.o   -c "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices/09 Sumar 2 matrices.c"

CMakeFiles/09_Sumar_2_matrices.dir/09_Sumar_2_matrices.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/09_Sumar_2_matrices.dir/09_Sumar_2_matrices.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices/09 Sumar 2 matrices.c" > CMakeFiles/09_Sumar_2_matrices.dir/09_Sumar_2_matrices.c.i

CMakeFiles/09_Sumar_2_matrices.dir/09_Sumar_2_matrices.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/09_Sumar_2_matrices.dir/09_Sumar_2_matrices.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices/09 Sumar 2 matrices.c" -o CMakeFiles/09_Sumar_2_matrices.dir/09_Sumar_2_matrices.c.s

# Object files for target 09_Sumar_2_matrices
09_Sumar_2_matrices_OBJECTS = \
"CMakeFiles/09_Sumar_2_matrices.dir/09_Sumar_2_matrices.c.o"

# External object files for target 09_Sumar_2_matrices
09_Sumar_2_matrices_EXTERNAL_OBJECTS =

09_Sumar_2_matrices: CMakeFiles/09_Sumar_2_matrices.dir/09_Sumar_2_matrices.c.o
09_Sumar_2_matrices: CMakeFiles/09_Sumar_2_matrices.dir/build.make
09_Sumar_2_matrices: CMakeFiles/09_Sumar_2_matrices.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 09_Sumar_2_matrices"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/09_Sumar_2_matrices.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/09_Sumar_2_matrices.dir/build: 09_Sumar_2_matrices

.PHONY : CMakeFiles/09_Sumar_2_matrices.dir/build

CMakeFiles/09_Sumar_2_matrices.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/09_Sumar_2_matrices.dir/cmake_clean.cmake
.PHONY : CMakeFiles/09_Sumar_2_matrices.dir/clean

CMakeFiles/09_Sumar_2_matrices.dir/depend:
	cd "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices" "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices" "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/02 Arreglos bidimensionales/09 Sumar 2 matrices/cmake-build-debug/CMakeFiles/09_Sumar_2_matrices.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/09_Sumar_2_matrices.dir/depend

