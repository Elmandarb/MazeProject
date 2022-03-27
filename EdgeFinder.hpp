//
// Created by Erics on 2/4/2022.
//

#ifndef MAZEPROJECT_EDGEFINDER_HPP
#define MAZEPROJECT_EDGEFINDER_HPP

#include "Maze.hpp"

class EdgeFinder {
public:
    EdgeFinder(Maze maze);

    Cell start();
    Cell end();

private:
    Cell _start;
    Cell _end;
};




#endif //MAZEPROJECT_EDGEFINDER_HPP
