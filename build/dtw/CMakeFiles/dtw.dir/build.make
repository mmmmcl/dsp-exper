# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zxh/code.d/cmakeprojects/dsp_work

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zxh/code.d/cmakeprojects/dsp_work/build

# Include any dependencies generated for this target.
include dtw/CMakeFiles/dtw.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include dtw/CMakeFiles/dtw.dir/compiler_depend.make

# Include the progress variables for this target.
include dtw/CMakeFiles/dtw.dir/progress.make

# Include the compile flags for this target's objects.
include dtw/CMakeFiles/dtw.dir/flags.make

dtw/CMakeFiles/dtw.dir/src/dtw.cpp.o: dtw/CMakeFiles/dtw.dir/flags.make
dtw/CMakeFiles/dtw.dir/src/dtw.cpp.o: ../dtw/src/dtw.cpp
dtw/CMakeFiles/dtw.dir/src/dtw.cpp.o: dtw/CMakeFiles/dtw.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zxh/code.d/cmakeprojects/dsp_work/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object dtw/CMakeFiles/dtw.dir/src/dtw.cpp.o"
	cd /home/zxh/code.d/cmakeprojects/dsp_work/build/dtw && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT dtw/CMakeFiles/dtw.dir/src/dtw.cpp.o -MF CMakeFiles/dtw.dir/src/dtw.cpp.o.d -o CMakeFiles/dtw.dir/src/dtw.cpp.o -c /home/zxh/code.d/cmakeprojects/dsp_work/dtw/src/dtw.cpp

dtw/CMakeFiles/dtw.dir/src/dtw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dtw.dir/src/dtw.cpp.i"
	cd /home/zxh/code.d/cmakeprojects/dsp_work/build/dtw && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zxh/code.d/cmakeprojects/dsp_work/dtw/src/dtw.cpp > CMakeFiles/dtw.dir/src/dtw.cpp.i

dtw/CMakeFiles/dtw.dir/src/dtw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dtw.dir/src/dtw.cpp.s"
	cd /home/zxh/code.d/cmakeprojects/dsp_work/build/dtw && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zxh/code.d/cmakeprojects/dsp_work/dtw/src/dtw.cpp -o CMakeFiles/dtw.dir/src/dtw.cpp.s

# Object files for target dtw
dtw_OBJECTS = \
"CMakeFiles/dtw.dir/src/dtw.cpp.o"

# External object files for target dtw
dtw_EXTERNAL_OBJECTS =

dtw/libdtw.a: dtw/CMakeFiles/dtw.dir/src/dtw.cpp.o
dtw/libdtw.a: dtw/CMakeFiles/dtw.dir/build.make
dtw/libdtw.a: dtw/CMakeFiles/dtw.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zxh/code.d/cmakeprojects/dsp_work/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libdtw.a"
	cd /home/zxh/code.d/cmakeprojects/dsp_work/build/dtw && $(CMAKE_COMMAND) -P CMakeFiles/dtw.dir/cmake_clean_target.cmake
	cd /home/zxh/code.d/cmakeprojects/dsp_work/build/dtw && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dtw.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dtw/CMakeFiles/dtw.dir/build: dtw/libdtw.a
.PHONY : dtw/CMakeFiles/dtw.dir/build

dtw/CMakeFiles/dtw.dir/clean:
	cd /home/zxh/code.d/cmakeprojects/dsp_work/build/dtw && $(CMAKE_COMMAND) -P CMakeFiles/dtw.dir/cmake_clean.cmake
.PHONY : dtw/CMakeFiles/dtw.dir/clean

dtw/CMakeFiles/dtw.dir/depend:
	cd /home/zxh/code.d/cmakeprojects/dsp_work/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zxh/code.d/cmakeprojects/dsp_work /home/zxh/code.d/cmakeprojects/dsp_work/dtw /home/zxh/code.d/cmakeprojects/dsp_work/build /home/zxh/code.d/cmakeprojects/dsp_work/build/dtw /home/zxh/code.d/cmakeprojects/dsp_work/build/dtw/CMakeFiles/dtw.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dtw/CMakeFiles/dtw.dir/depend

