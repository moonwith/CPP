# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/jwf/code/CPP/zlsg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jwf/code/CPP/zlsg

# Include any dependencies generated for this target.
include frame/chores/CMakeFiles/chores.dir/depend.make

# Include the progress variables for this target.
include frame/chores/CMakeFiles/chores.dir/progress.make

# Include the compile flags for this target's objects.
include frame/chores/CMakeFiles/chores.dir/flags.make

frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o: frame/chores/CMakeFiles/chores.dir/flags.make
frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o: frame/chores/farm/farm_mgr.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jwf/code/CPP/zlsg/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o"
	cd /home/jwf/code/CPP/zlsg/frame/chores && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/chores.dir/farm/farm_mgr.cc.o -c /home/jwf/code/CPP/zlsg/frame/chores/farm/farm_mgr.cc

frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chores.dir/farm/farm_mgr.cc.i"
	cd /home/jwf/code/CPP/zlsg/frame/chores && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/jwf/code/CPP/zlsg/frame/chores/farm/farm_mgr.cc > CMakeFiles/chores.dir/farm/farm_mgr.cc.i

frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chores.dir/farm/farm_mgr.cc.s"
	cd /home/jwf/code/CPP/zlsg/frame/chores && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/jwf/code/CPP/zlsg/frame/chores/farm/farm_mgr.cc -o CMakeFiles/chores.dir/farm/farm_mgr.cc.s

frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o.requires:
.PHONY : frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o.requires

frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o.provides: frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o.requires
	$(MAKE) -f frame/chores/CMakeFiles/chores.dir/build.make frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o.provides.build
.PHONY : frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o.provides

frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o.provides.build: frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o

frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o: frame/chores/CMakeFiles/chores.dir/flags.make
frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o: frame/chores/farm/farm.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jwf/code/CPP/zlsg/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o"
	cd /home/jwf/code/CPP/zlsg/frame/chores && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/chores.dir/farm/farm.cc.o -c /home/jwf/code/CPP/zlsg/frame/chores/farm/farm.cc

frame/chores/CMakeFiles/chores.dir/farm/farm.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chores.dir/farm/farm.cc.i"
	cd /home/jwf/code/CPP/zlsg/frame/chores && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/jwf/code/CPP/zlsg/frame/chores/farm/farm.cc > CMakeFiles/chores.dir/farm/farm.cc.i

frame/chores/CMakeFiles/chores.dir/farm/farm.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chores.dir/farm/farm.cc.s"
	cd /home/jwf/code/CPP/zlsg/frame/chores && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/jwf/code/CPP/zlsg/frame/chores/farm/farm.cc -o CMakeFiles/chores.dir/farm/farm.cc.s

frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o.requires:
.PHONY : frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o.requires

frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o.provides: frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o.requires
	$(MAKE) -f frame/chores/CMakeFiles/chores.dir/build.make frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o.provides.build
.PHONY : frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o.provides

frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o.provides.build: frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o

# Object files for target chores
chores_OBJECTS = \
"CMakeFiles/chores.dir/farm/farm_mgr.cc.o" \
"CMakeFiles/chores.dir/farm/farm.cc.o"

# External object files for target chores
chores_EXTERNAL_OBJECTS =

frame/chores/libchores.a: frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o
frame/chores/libchores.a: frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o
frame/chores/libchores.a: frame/chores/CMakeFiles/chores.dir/build.make
frame/chores/libchores.a: frame/chores/CMakeFiles/chores.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libchores.a"
	cd /home/jwf/code/CPP/zlsg/frame/chores && $(CMAKE_COMMAND) -P CMakeFiles/chores.dir/cmake_clean_target.cmake
	cd /home/jwf/code/CPP/zlsg/frame/chores && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chores.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
frame/chores/CMakeFiles/chores.dir/build: frame/chores/libchores.a
.PHONY : frame/chores/CMakeFiles/chores.dir/build

frame/chores/CMakeFiles/chores.dir/requires: frame/chores/CMakeFiles/chores.dir/farm/farm_mgr.cc.o.requires
frame/chores/CMakeFiles/chores.dir/requires: frame/chores/CMakeFiles/chores.dir/farm/farm.cc.o.requires
.PHONY : frame/chores/CMakeFiles/chores.dir/requires

frame/chores/CMakeFiles/chores.dir/clean:
	cd /home/jwf/code/CPP/zlsg/frame/chores && $(CMAKE_COMMAND) -P CMakeFiles/chores.dir/cmake_clean.cmake
.PHONY : frame/chores/CMakeFiles/chores.dir/clean

frame/chores/CMakeFiles/chores.dir/depend:
	cd /home/jwf/code/CPP/zlsg && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jwf/code/CPP/zlsg /home/jwf/code/CPP/zlsg/frame/chores /home/jwf/code/CPP/zlsg /home/jwf/code/CPP/zlsg/frame/chores /home/jwf/code/CPP/zlsg/frame/chores/CMakeFiles/chores.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : frame/chores/CMakeFiles/chores.dir/depend
