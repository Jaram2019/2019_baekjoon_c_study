# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\main\Github\2019_baekjoon_c_study\mw\1110

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\main\Github\2019_baekjoon_c_study\mw\1110\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1110.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1110.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1110.dir/flags.make

CMakeFiles/1110.dir/1110.c.obj: CMakeFiles/1110.dir/flags.make
CMakeFiles/1110.dir/1110.c.obj: ../1110.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\main\Github\2019_baekjoon_c_study\mw\1110\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/1110.dir/1110.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\1110.dir\1110.c.obj   -c C:\main\Github\2019_baekjoon_c_study\mw\1110\1110.c

CMakeFiles/1110.dir/1110.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/1110.dir/1110.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\main\Github\2019_baekjoon_c_study\mw\1110\1110.c > CMakeFiles\1110.dir\1110.c.i

CMakeFiles/1110.dir/1110.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/1110.dir/1110.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\main\Github\2019_baekjoon_c_study\mw\1110\1110.c -o CMakeFiles\1110.dir\1110.c.s

# Object files for target 1110
1110_OBJECTS = \
"CMakeFiles/1110.dir/1110.c.obj"

# External object files for target 1110
1110_EXTERNAL_OBJECTS =

1110.exe: CMakeFiles/1110.dir/1110.c.obj
1110.exe: CMakeFiles/1110.dir/build.make
1110.exe: CMakeFiles/1110.dir/linklibs.rsp
1110.exe: CMakeFiles/1110.dir/objects1.rsp
1110.exe: CMakeFiles/1110.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\main\Github\2019_baekjoon_c_study\mw\1110\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 1110.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1110.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1110.dir/build: 1110.exe

.PHONY : CMakeFiles/1110.dir/build

CMakeFiles/1110.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1110.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1110.dir/clean

CMakeFiles/1110.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\main\Github\2019_baekjoon_c_study\mw\1110 C:\main\Github\2019_baekjoon_c_study\mw\1110 C:\main\Github\2019_baekjoon_c_study\mw\1110\cmake-build-debug C:\main\Github\2019_baekjoon_c_study\mw\1110\cmake-build-debug C:\main\Github\2019_baekjoon_c_study\mw\1110\cmake-build-debug\CMakeFiles\1110.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1110.dir/depend

