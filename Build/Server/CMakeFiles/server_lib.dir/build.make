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
CMAKE_SOURCE_DIR = /home/obnoxious/Desktop/DURKA/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/obnoxious/Desktop/DURKA/src/Build

# Include any dependencies generated for this target.
include Server/CMakeFiles/server_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Server/CMakeFiles/server_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include Server/CMakeFiles/server_lib.dir/progress.make

# Include the compile flags for this target's objects.
include Server/CMakeFiles/server_lib.dir/flags.make

Server/CMakeFiles/server_lib.dir/network.cpp.o: Server/CMakeFiles/server_lib.dir/flags.make
Server/CMakeFiles/server_lib.dir/network.cpp.o: ../Server/network.cpp
Server/CMakeFiles/server_lib.dir/network.cpp.o: Server/CMakeFiles/server_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/obnoxious/Desktop/DURKA/src/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Server/CMakeFiles/server_lib.dir/network.cpp.o"
	cd /home/obnoxious/Desktop/DURKA/src/Build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Server/CMakeFiles/server_lib.dir/network.cpp.o -MF CMakeFiles/server_lib.dir/network.cpp.o.d -o CMakeFiles/server_lib.dir/network.cpp.o -c /home/obnoxious/Desktop/DURKA/src/Server/network.cpp

Server/CMakeFiles/server_lib.dir/network.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_lib.dir/network.cpp.i"
	cd /home/obnoxious/Desktop/DURKA/src/Build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/obnoxious/Desktop/DURKA/src/Server/network.cpp > CMakeFiles/server_lib.dir/network.cpp.i

Server/CMakeFiles/server_lib.dir/network.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_lib.dir/network.cpp.s"
	cd /home/obnoxious/Desktop/DURKA/src/Build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/obnoxious/Desktop/DURKA/src/Server/network.cpp -o CMakeFiles/server_lib.dir/network.cpp.s

Server/CMakeFiles/server_lib.dir/asylum.cpp.o: Server/CMakeFiles/server_lib.dir/flags.make
Server/CMakeFiles/server_lib.dir/asylum.cpp.o: ../Server/asylum.cpp
Server/CMakeFiles/server_lib.dir/asylum.cpp.o: Server/CMakeFiles/server_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/obnoxious/Desktop/DURKA/src/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Server/CMakeFiles/server_lib.dir/asylum.cpp.o"
	cd /home/obnoxious/Desktop/DURKA/src/Build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Server/CMakeFiles/server_lib.dir/asylum.cpp.o -MF CMakeFiles/server_lib.dir/asylum.cpp.o.d -o CMakeFiles/server_lib.dir/asylum.cpp.o -c /home/obnoxious/Desktop/DURKA/src/Server/asylum.cpp

Server/CMakeFiles/server_lib.dir/asylum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_lib.dir/asylum.cpp.i"
	cd /home/obnoxious/Desktop/DURKA/src/Build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/obnoxious/Desktop/DURKA/src/Server/asylum.cpp > CMakeFiles/server_lib.dir/asylum.cpp.i

Server/CMakeFiles/server_lib.dir/asylum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_lib.dir/asylum.cpp.s"
	cd /home/obnoxious/Desktop/DURKA/src/Build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/obnoxious/Desktop/DURKA/src/Server/asylum.cpp -o CMakeFiles/server_lib.dir/asylum.cpp.s

Server/CMakeFiles/server_lib.dir/menu.cpp.o: Server/CMakeFiles/server_lib.dir/flags.make
Server/CMakeFiles/server_lib.dir/menu.cpp.o: ../Server/menu.cpp
Server/CMakeFiles/server_lib.dir/menu.cpp.o: Server/CMakeFiles/server_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/obnoxious/Desktop/DURKA/src/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Server/CMakeFiles/server_lib.dir/menu.cpp.o"
	cd /home/obnoxious/Desktop/DURKA/src/Build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Server/CMakeFiles/server_lib.dir/menu.cpp.o -MF CMakeFiles/server_lib.dir/menu.cpp.o.d -o CMakeFiles/server_lib.dir/menu.cpp.o -c /home/obnoxious/Desktop/DURKA/src/Server/menu.cpp

Server/CMakeFiles/server_lib.dir/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_lib.dir/menu.cpp.i"
	cd /home/obnoxious/Desktop/DURKA/src/Build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/obnoxious/Desktop/DURKA/src/Server/menu.cpp > CMakeFiles/server_lib.dir/menu.cpp.i

Server/CMakeFiles/server_lib.dir/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_lib.dir/menu.cpp.s"
	cd /home/obnoxious/Desktop/DURKA/src/Build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/obnoxious/Desktop/DURKA/src/Server/menu.cpp -o CMakeFiles/server_lib.dir/menu.cpp.s

# Object files for target server_lib
server_lib_OBJECTS = \
"CMakeFiles/server_lib.dir/network.cpp.o" \
"CMakeFiles/server_lib.dir/asylum.cpp.o" \
"CMakeFiles/server_lib.dir/menu.cpp.o"

# External object files for target server_lib
server_lib_EXTERNAL_OBJECTS =

Server/libserver_lib.a: Server/CMakeFiles/server_lib.dir/network.cpp.o
Server/libserver_lib.a: Server/CMakeFiles/server_lib.dir/asylum.cpp.o
Server/libserver_lib.a: Server/CMakeFiles/server_lib.dir/menu.cpp.o
Server/libserver_lib.a: Server/CMakeFiles/server_lib.dir/build.make
Server/libserver_lib.a: Server/CMakeFiles/server_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/obnoxious/Desktop/DURKA/src/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libserver_lib.a"
	cd /home/obnoxious/Desktop/DURKA/src/Build/Server && $(CMAKE_COMMAND) -P CMakeFiles/server_lib.dir/cmake_clean_target.cmake
	cd /home/obnoxious/Desktop/DURKA/src/Build/Server && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Server/CMakeFiles/server_lib.dir/build: Server/libserver_lib.a
.PHONY : Server/CMakeFiles/server_lib.dir/build

Server/CMakeFiles/server_lib.dir/clean:
	cd /home/obnoxious/Desktop/DURKA/src/Build/Server && $(CMAKE_COMMAND) -P CMakeFiles/server_lib.dir/cmake_clean.cmake
.PHONY : Server/CMakeFiles/server_lib.dir/clean

Server/CMakeFiles/server_lib.dir/depend:
	cd /home/obnoxious/Desktop/DURKA/src/Build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/obnoxious/Desktop/DURKA/src /home/obnoxious/Desktop/DURKA/src/Server /home/obnoxious/Desktop/DURKA/src/Build /home/obnoxious/Desktop/DURKA/src/Build/Server /home/obnoxious/Desktop/DURKA/src/Build/Server/CMakeFiles/server_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Server/CMakeFiles/server_lib.dir/depend
