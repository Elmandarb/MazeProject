//
// Created by Erics on 2/4/2022.
//

#include "Maze.hpp"
Maze::Maze(std::string file) {

    std::fstream inputStream;
    inputStream.open(file, std::ios::in);
    if(! inputStream.is_open() ) {
        std::cout << "Unable to open " << file << std::endl;
        std::cout << "Terminating..." << std::endl;
        exit(2);
    }
    int rowPop = 0;
    int colPop = 0;
    //std::cout << "Looks like it was able to open " << file << std::endl;

    _Grid.push_back(std::vector<Cell>());

    char number;
    while (inputStream >> number) {     //Read each char
        bool boolPop = (number == '1');         //check whether 1 or 0
        _Grid[colPop].push_back(Cell(rowPop, colPop, boolPop));  //make a cell with coordinates and bool
        if(inputStream.peek() == '\n') {        //see if the row ends
            colPop++;       // if row ends go to next column
            _width = rowPop + 1;
            rowPop = 0;     //reset row counter
            _Grid.push_back(std::vector<Cell>());
        }
        else {
            rowPop++;       //more in the row increment and go next
        }
    }
    _height = colPop;

}
Maze::Maze() {

}
std::vector<std::vector<Cell>> Maze::getGrid(){
    return _Grid;
}
void Maze::setCellPath(int x, int y) {
    _Grid[x][y].setPath();
}
Cell Maze::getCell(int x, int y) {
    return _Grid[y][x];
}
void Maze::setMarkPath(int x, int y) {
    _Grid[x][y].setExplored();
}

void Maze::printGrid() {

    for(int i = 0; i < _height; i++) {
        for(int j = 0; j < _width; j++) {
            if(_Grid[i][j].isPath()) {
                std::cout << ' ';
            }
            else {
                if (_Grid[i][j].value()) {
                    std::cout << 1;
                } else {
                    std::cout << 0;
                }
            }
        }
        std::cout << '\n';
    }
}
int Maze::getWidth()  {
    return _width;
}
int Maze::getHeight() {
    return _height;
}