cmake_minimum_required(VERSION 3.21)
project(MazeProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(MazeProject main.cpp Maze.cpp Maze.hpp EdgeFinder.cpp EdgeFinder.hpp Cell.cpp Cell.hpp adjacentCell.cpp adjacentCell.hpp MazeSolver.cpp MazeSolver.hpp)
