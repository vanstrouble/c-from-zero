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
CMAKE_SOURCE_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/05_Vector_de_10_elementos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/05_Vector_de_10_elementos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/05_Vector_de_10_elementos.dir/flags.make

CMakeFiles/05_Vector_de_10_elementos.dir/05_Vector_de_10_elementos.c.o: CMakeFiles/05_Vector_de_10_elementos.dir/flags.make
CMakeFiles/05_Vector_de_10_elementos.dir/05_Vector_de_10_elementos.c.o: ../05\ Vector\ de\ 10\ elementos.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/05_Vector_de_10_elementos.dir/05_Vector_de_10_elementos.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/05_Vector_de_10_elementos.dir/05_Vector_de_10_elementos.c.o   -c "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos/05 Vector de 10 elementos.c"

CMakeFiles/05_Vector_de_10_elementos.dir/05_Vector_de_10_elementos.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/05_Vector_de_10_elementos.dir/05_Vector_de_10_elementos.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos/05 Vector de 10 elementos.c" > CMakeFiles/05_Vector_de_10_elementos.dir/05_Vector_de_10_elementos.c.i

CMakeFiles/05_Vector_de_10_elementos.dir/05_Vector_de_10_elementos.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/05_Vector_de_10_elementos.dir/05_Vector_de_10_elementos.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos/05 Vector de 10 elementos.c" -o CMakeFiles/05_Vector_de_10_elementos.dir/05_Vector_de_10_elementos.c.s

# Object files for target 05_Vector_de_10_elementos
05_Vector_de_10_elementos_OBJECTS = \
"CMakeFiles/05_Vector_de_10_elementos.dir/05_Vector_de_10_elementos.c.o"

# External object files for target 05_Vector_de_10_elementos
05_Vector_de_10_elementos_EXTERNAL_OBJECTS =

05_Vector_de_10_elementos: CMakeFiles/05_Vector_de_10_elementos.dir/05_Vector_de_10_elementos.c.o
05_Vector_de_10_elementos: CMakeFiles/05_Vector_de_10_elementos.dir/build.make
05_Vector_de_10_elementos: CMakeFiles/05_Vector_de_10_elementos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 05_Vector_de_10_elementos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/05_Vector_de_10_elementos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/05_Vector_de_10_elementos.dir/build: 05_Vector_de_10_elementos

.PHONY : CMakeFiles/05_Vector_de_10_elementos.dir/build

CMakeFiles/05_Vector_de_10_elementos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/05_Vector_de_10_elementos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/05_Vector_de_10_elementos.dir/clean

CMakeFiles/05_Vector_de_10_elementos.dir/depend:
	cd "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos" "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos" "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/08 Estructuras/02 Estructuras anidadas/05 Vector de 10 elementos/cmake-build-debug/CMakeFiles/05_Vector_de_10_elementos.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/05_Vector_de_10_elementos.dir/depend

