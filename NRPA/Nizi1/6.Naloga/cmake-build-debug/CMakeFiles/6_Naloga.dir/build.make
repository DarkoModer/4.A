# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Sola\4.a\NRPA\Nizi1\6.Naloga

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Sola\4.a\NRPA\Nizi1\6.Naloga\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/6_Naloga.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/6_Naloga.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/6_Naloga.dir/flags.make

CMakeFiles/6_Naloga.dir/main.cpp.obj: CMakeFiles/6_Naloga.dir/flags.make
CMakeFiles/6_Naloga.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Sola\4.a\NRPA\Nizi1\6.Naloga\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/6_Naloga.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\6_Naloga.dir\main.cpp.obj -c D:\Sola\4.a\NRPA\Nizi1\6.Naloga\main.cpp

CMakeFiles/6_Naloga.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/6_Naloga.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Sola\4.a\NRPA\Nizi1\6.Naloga\main.cpp > CMakeFiles\6_Naloga.dir\main.cpp.i

CMakeFiles/6_Naloga.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/6_Naloga.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Sola\4.a\NRPA\Nizi1\6.Naloga\main.cpp -o CMakeFiles\6_Naloga.dir\main.cpp.s

# Object files for target 6_Naloga
6_Naloga_OBJECTS = \
"CMakeFiles/6_Naloga.dir/main.cpp.obj"

# External object files for target 6_Naloga
6_Naloga_EXTERNAL_OBJECTS =

6_Naloga.exe: CMakeFiles/6_Naloga.dir/main.cpp.obj
6_Naloga.exe: CMakeFiles/6_Naloga.dir/build.make
6_Naloga.exe: CMakeFiles/6_Naloga.dir/linklibs.rsp
6_Naloga.exe: CMakeFiles/6_Naloga.dir/objects1.rsp
6_Naloga.exe: CMakeFiles/6_Naloga.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Sola\4.a\NRPA\Nizi1\6.Naloga\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 6_Naloga.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\6_Naloga.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/6_Naloga.dir/build: 6_Naloga.exe

.PHONY : CMakeFiles/6_Naloga.dir/build

CMakeFiles/6_Naloga.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\6_Naloga.dir\cmake_clean.cmake
.PHONY : CMakeFiles/6_Naloga.dir/clean

CMakeFiles/6_Naloga.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Sola\4.a\NRPA\Nizi1\6.Naloga D:\Sola\4.a\NRPA\Nizi1\6.Naloga D:\Sola\4.a\NRPA\Nizi1\6.Naloga\cmake-build-debug D:\Sola\4.a\NRPA\Nizi1\6.Naloga\cmake-build-debug D:\Sola\4.a\NRPA\Nizi1\6.Naloga\cmake-build-debug\CMakeFiles\6_Naloga.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/6_Naloga.dir/depend

