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
CMAKE_SOURCE_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/flags.make

CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/main.c.o: CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/flags.make
CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/main.c.o   -c "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo/main.c"

CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo/main.c" > CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/main.c.i

CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo/main.c" -o CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/main.c.s

# Object files for target 02_Comprobar_si_un_numero_es_positivo_o_negativo
02_Comprobar_si_un_numero_es_positivo_o_negativo_OBJECTS = \
"CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/main.c.o"

# External object files for target 02_Comprobar_si_un_numero_es_positivo_o_negativo
02_Comprobar_si_un_numero_es_positivo_o_negativo_EXTERNAL_OBJECTS =

02_Comprobar_si_un_numero_es_positivo_o_negativo: CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/main.c.o
02_Comprobar_si_un_numero_es_positivo_o_negativo: CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/build.make
02_Comprobar_si_un_numero_es_positivo_o_negativo: CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 02_Comprobar_si_un_numero_es_positivo_o_negativo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/build: 02_Comprobar_si_un_numero_es_positivo_o_negativo

.PHONY : CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/build

CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/clean

CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/depend:
	cd "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia if/02 Comprobar si un numero es positivo o negativo/cmake-build-debug/CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/02_Comprobar_si_un_numero_es_positivo_o_negativo.dir/depend

