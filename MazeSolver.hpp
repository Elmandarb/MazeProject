//
// Created by Erics on 2/4/2022.
//

#ifndef MAZEPROJECT_MAZESOLVER_HPP
#define MAZEPROJECT_MAZESOLVER_HPP


#include "adjacentCell.hpp"
#include "EdgeFinder.hpp"
#include <stack>

class MazeSolver {
public:
    MazeSolver(Maze maze, Cell start, Cell end);

private:
    std::stack<Cell> stack;
};


#endif //MAZEPROJECT_MAZESOLVER_HPP
