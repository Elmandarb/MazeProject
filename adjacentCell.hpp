//
// Created by Erics on 2/4/2022.
//

#ifndef MAZEPROJECT_ADJACENTCELL_HPP
#define MAZEPROJECT_ADJACENTCELL_HPP


#include "Maze.hpp"

class adjacentCell {
public:
    adjacentCell(Maze maze);
    Cell getAdj(Cell start);
    void setTick(Cell origin);
    void printMe();
private:
    Maze _maze;
};


#endif //MAZEPROJECT_ADJACENTCELL_HPP
