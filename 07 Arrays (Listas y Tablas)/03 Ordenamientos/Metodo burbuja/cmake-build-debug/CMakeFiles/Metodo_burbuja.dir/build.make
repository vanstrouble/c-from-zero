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
CMAKE_SOURCE_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Metodo_burbuja.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Metodo_burbuja.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Metodo_burbuja.dir/flags.make

CMakeFiles/Metodo_burbuja.dir/Método_burbuja.c.o: CMakeFiles/Metodo_burbuja.dir/flags.make
CMakeFiles/Metodo_burbuja.dir/Método_burbuja.c.o: ../Método\ burbuja.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Metodo_burbuja.dir/Método_burbuja.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Metodo_burbuja.dir/Método_burbuja.c.o   -c "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja/Método burbuja.c"

CMakeFiles/Metodo_burbuja.dir/Método_burbuja.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Metodo_burbuja.dir/Método_burbuja.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja/Método burbuja.c" > CMakeFiles/Metodo_burbuja.dir/Método_burbuja.c.i

CMakeFiles/Metodo_burbuja.dir/Método_burbuja.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Metodo_burbuja.dir/Método_burbuja.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja/Método burbuja.c" -o CMakeFiles/Metodo_burbuja.dir/Método_burbuja.c.s

# Object files for target Metodo_burbuja
Metodo_burbuja_OBJECTS = \
"CMakeFiles/Metodo_burbuja.dir/Método_burbuja.c.o"

# External object files for target Metodo_burbuja
Metodo_burbuja_EXTERNAL_OBJECTS =

Metodo_burbuja: CMakeFiles/Metodo_burbuja.dir/Método_burbuja.c.o
Metodo_burbuja: CMakeFiles/Metodo_burbuja.dir/build.make
Metodo_burbuja: CMakeFiles/Metodo_burbuja.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Metodo_burbuja"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Metodo_burbuja.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Metodo_burbuja.dir/build: Metodo_burbuja

.PHONY : CMakeFiles/Metodo_burbuja.dir/build

CMakeFiles/Metodo_burbuja.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Metodo_burbuja.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Metodo_burbuja.dir/clean

CMakeFiles/Metodo_burbuja.dir/depend:
	cd "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja" "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja" "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/07 Arrays (Listas y Tablas)/03 Ordenamientos/Metodo burbuja/cmake-build-debug/CMakeFiles/Metodo_burbuja.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Metodo_burbuja.dir/depend
