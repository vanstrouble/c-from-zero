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
CMAKE_SOURCE_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/03_Contabilizar_vocales.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/03_Contabilizar_vocales.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/03_Contabilizar_vocales.dir/flags.make

CMakeFiles/03_Contabilizar_vocales.dir/03_Contabilizar_vocales.c.o: CMakeFiles/03_Contabilizar_vocales.dir/flags.make
CMakeFiles/03_Contabilizar_vocales.dir/03_Contabilizar_vocales.c.o: ../03\ Contabilizar\ vocales.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/03_Contabilizar_vocales.dir/03_Contabilizar_vocales.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/03_Contabilizar_vocales.dir/03_Contabilizar_vocales.c.o   -c "/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales/03 Contabilizar vocales.c"

CMakeFiles/03_Contabilizar_vocales.dir/03_Contabilizar_vocales.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/03_Contabilizar_vocales.dir/03_Contabilizar_vocales.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales/03 Contabilizar vocales.c" > CMakeFiles/03_Contabilizar_vocales.dir/03_Contabilizar_vocales.c.i

CMakeFiles/03_Contabilizar_vocales.dir/03_Contabilizar_vocales.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/03_Contabilizar_vocales.dir/03_Contabilizar_vocales.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales/03 Contabilizar vocales.c" -o CMakeFiles/03_Contabilizar_vocales.dir/03_Contabilizar_vocales.c.s

# Object files for target 03_Contabilizar_vocales
03_Contabilizar_vocales_OBJECTS = \
"CMakeFiles/03_Contabilizar_vocales.dir/03_Contabilizar_vocales.c.o"

# External object files for target 03_Contabilizar_vocales
03_Contabilizar_vocales_EXTERNAL_OBJECTS =

03_Contabilizar_vocales: CMakeFiles/03_Contabilizar_vocales.dir/03_Contabilizar_vocales.c.o
03_Contabilizar_vocales: CMakeFiles/03_Contabilizar_vocales.dir/build.make
03_Contabilizar_vocales: CMakeFiles/03_Contabilizar_vocales.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 03_Contabilizar_vocales"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/03_Contabilizar_vocales.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/03_Contabilizar_vocales.dir/build: 03_Contabilizar_vocales

.PHONY : CMakeFiles/03_Contabilizar_vocales.dir/build

CMakeFiles/03_Contabilizar_vocales.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/03_Contabilizar_vocales.dir/cmake_clean.cmake
.PHONY : CMakeFiles/03_Contabilizar_vocales.dir/clean

CMakeFiles/03_Contabilizar_vocales.dir/depend:
	cd "/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales" "/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales" "/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/11 Cadenas/02 Lectura de cadenas/03 Contabilizar vocales/cmake-build-debug/CMakeFiles/03_Contabilizar_vocales.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/03_Contabilizar_vocales.dir/depend
