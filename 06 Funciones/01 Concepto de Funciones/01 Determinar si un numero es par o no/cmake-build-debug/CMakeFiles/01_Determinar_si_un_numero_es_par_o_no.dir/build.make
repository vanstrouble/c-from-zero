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
CMAKE_SOURCE_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/flags.make

CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/01_Determinar_si_un_número_es_par_o_no.c.o: CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/flags.make
CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/01_Determinar_si_un_número_es_par_o_no.c.o: ../01\ Determinar\ si\ un\ número\ es\ par\ o\ no.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/01_Determinar_si_un_número_es_par_o_no.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/01_Determinar_si_un_número_es_par_o_no.c.o   -c "/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no/01 Determinar si un número es par o no.c"

CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/01_Determinar_si_un_número_es_par_o_no.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/01_Determinar_si_un_número_es_par_o_no.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no/01 Determinar si un número es par o no.c" > CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/01_Determinar_si_un_número_es_par_o_no.c.i

CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/01_Determinar_si_un_número_es_par_o_no.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/01_Determinar_si_un_número_es_par_o_no.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no/01 Determinar si un número es par o no.c" -o CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/01_Determinar_si_un_número_es_par_o_no.c.s

# Object files for target 01_Determinar_si_un_numero_es_par_o_no
01_Determinar_si_un_numero_es_par_o_no_OBJECTS = \
"CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/01_Determinar_si_un_número_es_par_o_no.c.o"

# External object files for target 01_Determinar_si_un_numero_es_par_o_no
01_Determinar_si_un_numero_es_par_o_no_EXTERNAL_OBJECTS =

01_Determinar_si_un_numero_es_par_o_no: CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/01_Determinar_si_un_número_es_par_o_no.c.o
01_Determinar_si_un_numero_es_par_o_no: CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/build.make
01_Determinar_si_un_numero_es_par_o_no: CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 01_Determinar_si_un_numero_es_par_o_no"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/build: 01_Determinar_si_un_numero_es_par_o_no

.PHONY : CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/build

CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/cmake_clean.cmake
.PHONY : CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/clean

CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/depend:
	cd "/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no" "/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no" "/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/06 Funciones/01 Concepto de Funciones/01 Determinar si un numero es par o no/cmake-build-debug/CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/01_Determinar_si_un_numero_es_par_o_no.dir/depend

