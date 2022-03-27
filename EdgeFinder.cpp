//
// Created by Erics on 2/4/2022.
//

#include "EdgeFinder.hpp"
EdgeFinder::EdgeFinder(Maze maze) {
    std::vector<std::vector<Cell>> edgeGrid = maze.getGrid();
    int height = maze.getHeight();
    int width = maze.getWidth();
    bool first = true;
    for(int i = 0; i < height; i++) {
        //std::cout << i << '\n';
        for(int j = 0; j < width; j++) {
            //std::cout << j;
            if(edgeGrid[i][j].y() == 0 || edgeGrid[i][j].y() == height-1) {
                if(!edgeGrid[i][j].value()) {
                    //std::cout << '\n' << "height";
                    if(first){
                        _start = edgeGrid[i][j];
                        first = false;
                    }
                    else {
                        _end = edgeGrid[i][j];
                    }
                    //std::cout <<'\n' << edgeGrid[i][j].row();
                    //std::cout <<'\n' << edgeGrid[i][j].column() << '\n';
                }
            }
            if(edgeGrid[i][j].x() == 0 || edgeGrid[i][j].x() == width-1) {
                if(!edgeGrid[i][j].value()) {
                    //std::cout << "width";
                    if(first){
                        _start = edgeGrid[i][j];
                        first = false;
                    }
                    else {
                        _end = edgeGrid[i][j];
                    }
                }
            }
        }
    }
}
Cell EdgeFinder::end() {
    return _end;
}
Cell EdgeFinder::start() {
    return _start;
}