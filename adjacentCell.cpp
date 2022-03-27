//
// Created by Erics on 2/4/2022.
//

#include "adjacentCell.hpp"

//should be -1 and +1 to width and height one at a time.
//should not return the previous cell
// use target.height() - previous.height()
// or use target.width() - previous.width()
//to determine which three squares to check
// use is Explored to not backtrackm,/
adjacentCell::adjacentCell(Maze maze) {
    _maze = maze;
}

Cell adjacentCell::getAdj(Cell start) {
    Cell place;
    //make sure cell exists
    //check if it is unexplored and 0
    //if both return the cell

    if(start.y() < _maze.getHeight() - 1) {
        place = _maze.getCell(start.x(), start.y() + 1);
        if(!place.value()) {
            if(!place.isExplored()) {
                return place;
            }
        }
    }
    if(start.y() > 0) {
        place = _maze.getCell(start.x() , start.y() - 1);
        if(!place.value()) {
            if(!place.isExplored()) {
                return place;
            }
        }
    }
    if(start.x() < _maze.getWidth() - 1) {
        place = _maze.getCell(start.x()+ 1, start.y() );
        if(!place.value()) {
            if(!place.isExplored()) {
                return place;
            }
        }
    }
    if(start.x() > 0) {
        place = _maze.getCell(start.x()- 1 , start.y() );
        if(!place.value()) {
            if(!place.isExplored()) {
                return place;
            }
        }
    }
    return start;
}
void adjacentCell::setTick(Cell origin) {
    _maze.setMarkPath(origin.y(), origin.x());
}
void adjacentCell::printMe() {
    _maze.printGrid();
}