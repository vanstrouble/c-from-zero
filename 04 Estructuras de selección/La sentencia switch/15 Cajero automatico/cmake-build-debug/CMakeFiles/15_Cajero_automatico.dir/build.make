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
CMAKE_SOURCE_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/15_Cajero_automatico.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/15_Cajero_automatico.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/15_Cajero_automatico.dir/flags.make

CMakeFiles/15_Cajero_automatico.dir/15_Cajero_automático.c.o: CMakeFiles/15_Cajero_automatico.dir/flags.make
CMakeFiles/15_Cajero_automatico.dir/15_Cajero_automático.c.o: ../15\ Cajero\ automático.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/15_Cajero_automatico.dir/15_Cajero_automático.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/15_Cajero_automatico.dir/15_Cajero_automático.c.o   -c "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico/15 Cajero automático.c"

CMakeFiles/15_Cajero_automatico.dir/15_Cajero_automático.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/15_Cajero_automatico.dir/15_Cajero_automático.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico/15 Cajero automático.c" > CMakeFiles/15_Cajero_automatico.dir/15_Cajero_automático.c.i

CMakeFiles/15_Cajero_automatico.dir/15_Cajero_automático.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/15_Cajero_automatico.dir/15_Cajero_automático.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico/15 Cajero automático.c" -o CMakeFiles/15_Cajero_automatico.dir/15_Cajero_automático.c.s

# Object files for target 15_Cajero_automatico
15_Cajero_automatico_OBJECTS = \
"CMakeFiles/15_Cajero_automatico.dir/15_Cajero_automático.c.o"

# External object files for target 15_Cajero_automatico
15_Cajero_automatico_EXTERNAL_OBJECTS =

15_Cajero_automatico: CMakeFiles/15_Cajero_automatico.dir/15_Cajero_automático.c.o
15_Cajero_automatico: CMakeFiles/15_Cajero_automatico.dir/build.make
15_Cajero_automatico: CMakeFiles/15_Cajero_automatico.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 15_Cajero_automatico"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/15_Cajero_automatico.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/15_Cajero_automatico.dir/build: 15_Cajero_automatico

.PHONY : CMakeFiles/15_Cajero_automatico.dir/build

CMakeFiles/15_Cajero_automatico.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/15_Cajero_automatico.dir/cmake_clean.cmake
.PHONY : CMakeFiles/15_Cajero_automatico.dir/clean

CMakeFiles/15_Cajero_automatico.dir/depend:
	cd "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico/cmake-build-debug" "/Users/pedrovazquez/CLionProjects/Udemy/04 Estructuras de selección/La sentencia switch/15 Cajero automatico/cmake-build-debug/CMakeFiles/15_Cajero_automatico.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/15_Cajero_automatico.dir/depend

