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
CMAKE_SOURCE_DIR = C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/ugraph.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/ugraph.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/ugraph.dir/flags.make

src/CMakeFiles/ugraph.dir/ugraph/main.cpp.obj: src/CMakeFiles/ugraph.dir/flags.make
src/CMakeFiles/ugraph.dir/ugraph/main.cpp.obj: ../src/ugraph/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/ugraph.dir/ugraph/main.cpp.obj"
	cd /d C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ugraph.dir\ugraph\main.cpp.obj -c C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\src\ugraph\main.cpp

src/CMakeFiles/ugraph.dir/ugraph/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ugraph.dir/ugraph/main.cpp.i"
	cd /d C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\src\ugraph\main.cpp > CMakeFiles\ugraph.dir\ugraph\main.cpp.i

src/CMakeFiles/ugraph.dir/ugraph/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ugraph.dir/ugraph/main.cpp.s"
	cd /d C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\src\ugraph\main.cpp -o CMakeFiles\ugraph.dir\ugraph\main.cpp.s

# Object files for target ugraph
ugraph_OBJECTS = \
"CMakeFiles/ugraph.dir/ugraph/main.cpp.obj"

# External object files for target ugraph
ugraph_EXTERNAL_OBJECTS =

src/ugraph.exe: src/CMakeFiles/ugraph.dir/ugraph/main.cpp.obj
src/ugraph.exe: src/CMakeFiles/ugraph.dir/build.make
src/ugraph.exe: src/CMakeFiles/ugraph.dir/linklibs.rsp
src/ugraph.exe: src/CMakeFiles/ugraph.dir/objects1.rsp
src/ugraph.exe: src/CMakeFiles/ugraph.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ugraph.exe"
	cd /d C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\cmake-build-debug\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ugraph.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/ugraph.dir/build: src/ugraph.exe

.PHONY : src/CMakeFiles/ugraph.dir/build

src/CMakeFiles/ugraph.dir/clean:
	cd /d C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\cmake-build-debug\src && $(CMAKE_COMMAND) -P CMakeFiles\ugraph.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/ugraph.dir/clean

src/CMakeFiles/ugraph.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\src C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\cmake-build-debug C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\cmake-build-debug\src C:\Users\fahre_000\Desktop\proga\dsba-ads2-wshp04-master\code\cmake-build-debug\src\CMakeFiles\ugraph.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/ugraph.dir/depend

