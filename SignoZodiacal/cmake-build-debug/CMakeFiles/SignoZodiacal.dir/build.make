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
CMAKE_SOURCE_DIR = "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SignoZodiacal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SignoZodiacal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SignoZodiacal.dir/flags.make

CMakeFiles/SignoZodiacal.dir/SignoZodiacal.c.o: CMakeFiles/SignoZodiacal.dir/flags.make
CMakeFiles/SignoZodiacal.dir/SignoZodiacal.c.o: ../SignoZodiacal.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SignoZodiacal.dir/SignoZodiacal.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SignoZodiacal.dir/SignoZodiacal.c.o   -c "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal/SignoZodiacal.c"

CMakeFiles/SignoZodiacal.dir/SignoZodiacal.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SignoZodiacal.dir/SignoZodiacal.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal/SignoZodiacal.c" > CMakeFiles/SignoZodiacal.dir/SignoZodiacal.c.i

CMakeFiles/SignoZodiacal.dir/SignoZodiacal.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SignoZodiacal.dir/SignoZodiacal.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal/SignoZodiacal.c" -o CMakeFiles/SignoZodiacal.dir/SignoZodiacal.c.s

# Object files for target SignoZodiacal
SignoZodiacal_OBJECTS = \
"CMakeFiles/SignoZodiacal.dir/SignoZodiacal.c.o"

# External object files for target SignoZodiacal
SignoZodiacal_EXTERNAL_OBJECTS =

SignoZodiacal: CMakeFiles/SignoZodiacal.dir/SignoZodiacal.c.o
SignoZodiacal: CMakeFiles/SignoZodiacal.dir/build.make
SignoZodiacal: CMakeFiles/SignoZodiacal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable SignoZodiacal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SignoZodiacal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SignoZodiacal.dir/build: SignoZodiacal

.PHONY : CMakeFiles/SignoZodiacal.dir/build

CMakeFiles/SignoZodiacal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SignoZodiacal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SignoZodiacal.dir/clean

CMakeFiles/SignoZodiacal.dir/depend:
	cd "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal" "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal" "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal/cmake-build-debug" "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal/cmake-build-debug" "/Users/pedrovazquezg/OneDrive - Universidad de Guanajuato/Universidad/UG/04 Cursos/Mastermind/Curso de C/SignoZodiacal/cmake-build-debug/CMakeFiles/SignoZodiacal.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SignoZodiacal.dir/depend

