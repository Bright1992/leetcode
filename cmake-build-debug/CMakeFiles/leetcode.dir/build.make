# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /opt/clion-2016.3.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2016.3.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bright/leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bright/leetcode/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/leetcode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/leetcode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leetcode.dir/flags.make

CMakeFiles/leetcode.dir/main.cpp.o: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bright/leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leetcode.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leetcode.dir/main.cpp.o -c /home/bright/leetcode/main.cpp

CMakeFiles/leetcode.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bright/leetcode/main.cpp > CMakeFiles/leetcode.dir/main.cpp.i

CMakeFiles/leetcode.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bright/leetcode/main.cpp -o CMakeFiles/leetcode.dir/main.cpp.s

CMakeFiles/leetcode.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/leetcode.dir/main.cpp.o.requires

CMakeFiles/leetcode.dir/main.cpp.o.provides: CMakeFiles/leetcode.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/leetcode.dir/build.make CMakeFiles/leetcode.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/leetcode.dir/main.cpp.o.provides

CMakeFiles/leetcode.dir/main.cpp.o.provides.build: CMakeFiles/leetcode.dir/main.cpp.o


CMakeFiles/leetcode.dir/374.cpp.o: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/374.cpp.o: ../374.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bright/leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/leetcode.dir/374.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leetcode.dir/374.cpp.o -c /home/bright/leetcode/374.cpp

CMakeFiles/leetcode.dir/374.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode.dir/374.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bright/leetcode/374.cpp > CMakeFiles/leetcode.dir/374.cpp.i

CMakeFiles/leetcode.dir/374.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode.dir/374.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bright/leetcode/374.cpp -o CMakeFiles/leetcode.dir/374.cpp.s

CMakeFiles/leetcode.dir/374.cpp.o.requires:

.PHONY : CMakeFiles/leetcode.dir/374.cpp.o.requires

CMakeFiles/leetcode.dir/374.cpp.o.provides: CMakeFiles/leetcode.dir/374.cpp.o.requires
	$(MAKE) -f CMakeFiles/leetcode.dir/build.make CMakeFiles/leetcode.dir/374.cpp.o.provides.build
.PHONY : CMakeFiles/leetcode.dir/374.cpp.o.provides

CMakeFiles/leetcode.dir/374.cpp.o.provides.build: CMakeFiles/leetcode.dir/374.cpp.o


CMakeFiles/leetcode.dir/456.cpp.o: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/456.cpp.o: ../456.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bright/leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/leetcode.dir/456.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leetcode.dir/456.cpp.o -c /home/bright/leetcode/456.cpp

CMakeFiles/leetcode.dir/456.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode.dir/456.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bright/leetcode/456.cpp > CMakeFiles/leetcode.dir/456.cpp.i

CMakeFiles/leetcode.dir/456.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode.dir/456.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bright/leetcode/456.cpp -o CMakeFiles/leetcode.dir/456.cpp.s

CMakeFiles/leetcode.dir/456.cpp.o.requires:

.PHONY : CMakeFiles/leetcode.dir/456.cpp.o.requires

CMakeFiles/leetcode.dir/456.cpp.o.provides: CMakeFiles/leetcode.dir/456.cpp.o.requires
	$(MAKE) -f CMakeFiles/leetcode.dir/build.make CMakeFiles/leetcode.dir/456.cpp.o.provides.build
.PHONY : CMakeFiles/leetcode.dir/456.cpp.o.provides

CMakeFiles/leetcode.dir/456.cpp.o.provides.build: CMakeFiles/leetcode.dir/456.cpp.o


# Object files for target leetcode
leetcode_OBJECTS = \
"CMakeFiles/leetcode.dir/main.cpp.o" \
"CMakeFiles/leetcode.dir/374.cpp.o" \
"CMakeFiles/leetcode.dir/456.cpp.o"

# External object files for target leetcode
leetcode_EXTERNAL_OBJECTS =

leetcode: CMakeFiles/leetcode.dir/main.cpp.o
leetcode: CMakeFiles/leetcode.dir/374.cpp.o
leetcode: CMakeFiles/leetcode.dir/456.cpp.o
leetcode: CMakeFiles/leetcode.dir/build.make
leetcode: CMakeFiles/leetcode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bright/leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable leetcode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leetcode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leetcode.dir/build: leetcode

.PHONY : CMakeFiles/leetcode.dir/build

CMakeFiles/leetcode.dir/requires: CMakeFiles/leetcode.dir/main.cpp.o.requires
CMakeFiles/leetcode.dir/requires: CMakeFiles/leetcode.dir/374.cpp.o.requires
CMakeFiles/leetcode.dir/requires: CMakeFiles/leetcode.dir/456.cpp.o.requires

.PHONY : CMakeFiles/leetcode.dir/requires

CMakeFiles/leetcode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leetcode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leetcode.dir/clean

CMakeFiles/leetcode.dir/depend:
	cd /home/bright/leetcode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bright/leetcode /home/bright/leetcode /home/bright/leetcode/cmake-build-debug /home/bright/leetcode/cmake-build-debug /home/bright/leetcode/cmake-build-debug/CMakeFiles/leetcode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leetcode.dir/depend

