# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\cmake-3.20.2-windows-x86_64\bin\cmake.exe

# The command to remove a file.
RM = C:\cmake-3.20.2-windows-x86_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\Coding\C++Projects\LeetCodeSolutionsCpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Coding\C++Projects\LeetCodeSolutionsCpp\build

# Include any dependencies generated for this target.
include CMakeFiles/leetcode.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/leetcode.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/leetcode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leetcode.dir/flags.make

CMakeFiles/leetcode.dir/src/dpType.cpp.obj: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/src/dpType.cpp.obj: ../src/dpType.cpp
CMakeFiles/leetcode.dir/src/dpType.cpp.obj: CMakeFiles/leetcode.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Coding\C++Projects\LeetCodeSolutionsCpp\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leetcode.dir/src/dpType.cpp.obj"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/leetcode.dir/src/dpType.cpp.obj -MF CMakeFiles\leetcode.dir\src\dpType.cpp.obj.d -o CMakeFiles\leetcode.dir\src\dpType.cpp.obj -c F:\Coding\C++Projects\LeetCodeSolutionsCpp\src\dpType.cpp

CMakeFiles/leetcode.dir/src/dpType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode.dir/src/dpType.cpp.i"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\Coding\C++Projects\LeetCodeSolutionsCpp\src\dpType.cpp > CMakeFiles\leetcode.dir\src\dpType.cpp.i

CMakeFiles/leetcode.dir/src/dpType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode.dir/src/dpType.cpp.s"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\Coding\C++Projects\LeetCodeSolutionsCpp\src\dpType.cpp -o CMakeFiles\leetcode.dir\src\dpType.cpp.s

CMakeFiles/leetcode.dir/src/main.cpp.obj: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/src/main.cpp.obj: ../src/main.cpp
CMakeFiles/leetcode.dir/src/main.cpp.obj: CMakeFiles/leetcode.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Coding\C++Projects\LeetCodeSolutionsCpp\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/leetcode.dir/src/main.cpp.obj"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/leetcode.dir/src/main.cpp.obj -MF CMakeFiles\leetcode.dir\src\main.cpp.obj.d -o CMakeFiles\leetcode.dir\src\main.cpp.obj -c F:\Coding\C++Projects\LeetCodeSolutionsCpp\src\main.cpp

CMakeFiles/leetcode.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode.dir/src/main.cpp.i"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\Coding\C++Projects\LeetCodeSolutionsCpp\src\main.cpp > CMakeFiles\leetcode.dir\src\main.cpp.i

CMakeFiles/leetcode.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode.dir/src/main.cpp.s"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\Coding\C++Projects\LeetCodeSolutionsCpp\src\main.cpp -o CMakeFiles\leetcode.dir\src\main.cpp.s

CMakeFiles/leetcode.dir/src/twoPointerType.cpp.obj: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/src/twoPointerType.cpp.obj: ../src/twoPointerType.cpp
CMakeFiles/leetcode.dir/src/twoPointerType.cpp.obj: CMakeFiles/leetcode.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Coding\C++Projects\LeetCodeSolutionsCpp\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/leetcode.dir/src/twoPointerType.cpp.obj"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/leetcode.dir/src/twoPointerType.cpp.obj -MF CMakeFiles\leetcode.dir\src\twoPointerType.cpp.obj.d -o CMakeFiles\leetcode.dir\src\twoPointerType.cpp.obj -c F:\Coding\C++Projects\LeetCodeSolutionsCpp\src\twoPointerType.cpp

CMakeFiles/leetcode.dir/src/twoPointerType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode.dir/src/twoPointerType.cpp.i"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\Coding\C++Projects\LeetCodeSolutionsCpp\src\twoPointerType.cpp > CMakeFiles\leetcode.dir\src\twoPointerType.cpp.i

CMakeFiles/leetcode.dir/src/twoPointerType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode.dir/src/twoPointerType.cpp.s"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\Coding\C++Projects\LeetCodeSolutionsCpp\src\twoPointerType.cpp -o CMakeFiles\leetcode.dir\src\twoPointerType.cpp.s

# Object files for target leetcode
leetcode_OBJECTS = \
"CMakeFiles/leetcode.dir/src/dpType.cpp.obj" \
"CMakeFiles/leetcode.dir/src/main.cpp.obj" \
"CMakeFiles/leetcode.dir/src/twoPointerType.cpp.obj"

# External object files for target leetcode
leetcode_EXTERNAL_OBJECTS =

../bin/leetcode.exe: CMakeFiles/leetcode.dir/src/dpType.cpp.obj
../bin/leetcode.exe: CMakeFiles/leetcode.dir/src/main.cpp.obj
../bin/leetcode.exe: CMakeFiles/leetcode.dir/src/twoPointerType.cpp.obj
../bin/leetcode.exe: CMakeFiles/leetcode.dir/build.make
../bin/leetcode.exe: CMakeFiles/leetcode.dir/linklibs.rsp
../bin/leetcode.exe: CMakeFiles/leetcode.dir/objects1.rsp
../bin/leetcode.exe: CMakeFiles/leetcode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Coding\C++Projects\LeetCodeSolutionsCpp\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ..\bin\leetcode.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\leetcode.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leetcode.dir/build: ../bin/leetcode.exe
.PHONY : CMakeFiles/leetcode.dir/build

CMakeFiles/leetcode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\leetcode.dir\cmake_clean.cmake
.PHONY : CMakeFiles/leetcode.dir/clean

CMakeFiles/leetcode.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Coding\C++Projects\LeetCodeSolutionsCpp F:\Coding\C++Projects\LeetCodeSolutionsCpp F:\Coding\C++Projects\LeetCodeSolutionsCpp\build F:\Coding\C++Projects\LeetCodeSolutionsCpp\build F:\Coding\C++Projects\LeetCodeSolutionsCpp\build\CMakeFiles\leetcode.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leetcode.dir/depend

