# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CalcularSenCosTan.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CalcularSenCosTan.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CalcularSenCosTan.dir/flags.make

CMakeFiles/CalcularSenCosTan.dir/CalcularSenCosTan.c.o: CMakeFiles/CalcularSenCosTan.dir/flags.make
CMakeFiles/CalcularSenCosTan.dir/CalcularSenCosTan.c.o: ../CalcularSenCosTan.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CalcularSenCosTan.dir/CalcularSenCosTan.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CalcularSenCosTan.dir/CalcularSenCosTan.c.o   -c "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan/CalcularSenCosTan.c"

CMakeFiles/CalcularSenCosTan.dir/CalcularSenCosTan.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CalcularSenCosTan.dir/CalcularSenCosTan.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan/CalcularSenCosTan.c" > CMakeFiles/CalcularSenCosTan.dir/CalcularSenCosTan.c.i

CMakeFiles/CalcularSenCosTan.dir/CalcularSenCosTan.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CalcularSenCosTan.dir/CalcularSenCosTan.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan/CalcularSenCosTan.c" -o CMakeFiles/CalcularSenCosTan.dir/CalcularSenCosTan.c.s

# Object files for target CalcularSenCosTan
CalcularSenCosTan_OBJECTS = \
"CMakeFiles/CalcularSenCosTan.dir/CalcularSenCosTan.c.o"

# External object files for target CalcularSenCosTan
CalcularSenCosTan_EXTERNAL_OBJECTS =

CalcularSenCosTan: CMakeFiles/CalcularSenCosTan.dir/CalcularSenCosTan.c.o
CalcularSenCosTan: CMakeFiles/CalcularSenCosTan.dir/build.make
CalcularSenCosTan: CMakeFiles/CalcularSenCosTan.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CalcularSenCosTan"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CalcularSenCosTan.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CalcularSenCosTan.dir/build: CalcularSenCosTan

.PHONY : CMakeFiles/CalcularSenCosTan.dir/build

CMakeFiles/CalcularSenCosTan.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CalcularSenCosTan.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CalcularSenCosTan.dir/clean

CMakeFiles/CalcularSenCosTan.dir/depend:
	cd "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan" "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan" "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan/cmake-build-debug" "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan/cmake-build-debug" "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/CalcularSenCosTan/cmake-build-debug/CMakeFiles/CalcularSenCosTan.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CalcularSenCosTan.dir/depend

