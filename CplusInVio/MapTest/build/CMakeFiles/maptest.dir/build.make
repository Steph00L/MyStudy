# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lcx/git_t2/MyStudy/CplusInVio/MapTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lcx/git_t2/MyStudy/CplusInVio/MapTest/build

# Include any dependencies generated for this target.
include CMakeFiles/maptest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/maptest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/maptest.dir/flags.make

CMakeFiles/maptest.dir/src/maptest.cpp.o: CMakeFiles/maptest.dir/flags.make
CMakeFiles/maptest.dir/src/maptest.cpp.o: ../src/maptest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lcx/git_t2/MyStudy/CplusInVio/MapTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/maptest.dir/src/maptest.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maptest.dir/src/maptest.cpp.o -c /home/lcx/git_t2/MyStudy/CplusInVio/MapTest/src/maptest.cpp

CMakeFiles/maptest.dir/src/maptest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maptest.dir/src/maptest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lcx/git_t2/MyStudy/CplusInVio/MapTest/src/maptest.cpp > CMakeFiles/maptest.dir/src/maptest.cpp.i

CMakeFiles/maptest.dir/src/maptest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maptest.dir/src/maptest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lcx/git_t2/MyStudy/CplusInVio/MapTest/src/maptest.cpp -o CMakeFiles/maptest.dir/src/maptest.cpp.s

CMakeFiles/maptest.dir/src/maptest.cpp.o.requires:

.PHONY : CMakeFiles/maptest.dir/src/maptest.cpp.o.requires

CMakeFiles/maptest.dir/src/maptest.cpp.o.provides: CMakeFiles/maptest.dir/src/maptest.cpp.o.requires
	$(MAKE) -f CMakeFiles/maptest.dir/build.make CMakeFiles/maptest.dir/src/maptest.cpp.o.provides.build
.PHONY : CMakeFiles/maptest.dir/src/maptest.cpp.o.provides

CMakeFiles/maptest.dir/src/maptest.cpp.o.provides.build: CMakeFiles/maptest.dir/src/maptest.cpp.o


# Object files for target maptest
maptest_OBJECTS = \
"CMakeFiles/maptest.dir/src/maptest.cpp.o"

# External object files for target maptest
maptest_EXTERNAL_OBJECTS =

../bin/maptest: CMakeFiles/maptest.dir/src/maptest.cpp.o
../bin/maptest: CMakeFiles/maptest.dir/build.make
../bin/maptest: CMakeFiles/maptest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lcx/git_t2/MyStudy/CplusInVio/MapTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/maptest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/maptest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/maptest.dir/build: ../bin/maptest

.PHONY : CMakeFiles/maptest.dir/build

CMakeFiles/maptest.dir/requires: CMakeFiles/maptest.dir/src/maptest.cpp.o.requires

.PHONY : CMakeFiles/maptest.dir/requires

CMakeFiles/maptest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/maptest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/maptest.dir/clean

CMakeFiles/maptest.dir/depend:
	cd /home/lcx/git_t2/MyStudy/CplusInVio/MapTest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lcx/git_t2/MyStudy/CplusInVio/MapTest /home/lcx/git_t2/MyStudy/CplusInVio/MapTest /home/lcx/git_t2/MyStudy/CplusInVio/MapTest/build /home/lcx/git_t2/MyStudy/CplusInVio/MapTest/build /home/lcx/git_t2/MyStudy/CplusInVio/MapTest/build/CMakeFiles/maptest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/maptest.dir/depend
