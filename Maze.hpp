//
// Created by Erics on 2/4/2022.
//

#ifndef MAZEPROJECT_MAZE_HPP
#define MAZEPROJECT_MAZE_HPP

#include "Cell.hpp"
#include <vector>
#include <iostream>
#include <fstream>

class Maze {

public:
    Maze(std::string file);
    Maze();

    std::vector<std::vector<Cell>> getGrid();
    int getWidth();
    int getHeight();
    void printGrid();
    Cell getCell(int x, int y);
    void setCellPath(int x, int y);
    void setMarkPath(int x, int y);
private:
    std::vector<std::vector<Cell>> _Grid;
    int _width;
    int _height;


};



#endif //MAZEPROJECT_MAZE_HPP
