# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rafael/Documents/UFT/IPA2017.01/Aula06

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rafael/Documents/UFT/IPA2017.01/Aula06/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Aula06.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Aula06.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Aula06.dir/flags.make

CMakeFiles/Aula06.dir/main.c.o: CMakeFiles/Aula06.dir/flags.make
CMakeFiles/Aula06.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rafael/Documents/UFT/IPA2017.01/Aula06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Aula06.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Aula06.dir/main.c.o   -c /Users/rafael/Documents/UFT/IPA2017.01/Aula06/main.c

CMakeFiles/Aula06.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Aula06.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/rafael/Documents/UFT/IPA2017.01/Aula06/main.c > CMakeFiles/Aula06.dir/main.c.i

CMakeFiles/Aula06.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Aula06.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/rafael/Documents/UFT/IPA2017.01/Aula06/main.c -o CMakeFiles/Aula06.dir/main.c.s

CMakeFiles/Aula06.dir/main.c.o.requires:

.PHONY : CMakeFiles/Aula06.dir/main.c.o.requires

CMakeFiles/Aula06.dir/main.c.o.provides: CMakeFiles/Aula06.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Aula06.dir/build.make CMakeFiles/Aula06.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Aula06.dir/main.c.o.provides

CMakeFiles/Aula06.dir/main.c.o.provides.build: CMakeFiles/Aula06.dir/main.c.o


# Object files for target Aula06
Aula06_OBJECTS = \
"CMakeFiles/Aula06.dir/main.c.o"

# External object files for target Aula06
Aula06_EXTERNAL_OBJECTS =

Aula06: CMakeFiles/Aula06.dir/main.c.o
Aula06: CMakeFiles/Aula06.dir/build.make
Aula06: CMakeFiles/Aula06.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rafael/Documents/UFT/IPA2017.01/Aula06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Aula06"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Aula06.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Aula06.dir/build: Aula06

.PHONY : CMakeFiles/Aula06.dir/build

CMakeFiles/Aula06.dir/requires: CMakeFiles/Aula06.dir/main.c.o.requires

.PHONY : CMakeFiles/Aula06.dir/requires

CMakeFiles/Aula06.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Aula06.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Aula06.dir/clean

CMakeFiles/Aula06.dir/depend:
	cd /Users/rafael/Documents/UFT/IPA2017.01/Aula06/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rafael/Documents/UFT/IPA2017.01/Aula06 /Users/rafael/Documents/UFT/IPA2017.01/Aula06 /Users/rafael/Documents/UFT/IPA2017.01/Aula06/cmake-build-debug /Users/rafael/Documents/UFT/IPA2017.01/Aula06/cmake-build-debug /Users/rafael/Documents/UFT/IPA2017.01/Aula06/cmake-build-debug/CMakeFiles/Aula06.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Aula06.dir/depend
