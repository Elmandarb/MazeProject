//
// Created by Erics on 2/4/2022.
//

#include "Cell.hpp"
Cell::Cell(int row, int col, bool value) {
    _row = row;
    _column = col;
    _value = value;
    _explored = false;
    _path = false;
}
Cell::Cell() {
    _row = 0;
    _value = true;
    _column = 0;
    _explored = false;
    _path = false;
}

int Cell::y() {
    return _column;
}
int Cell::x() {
    return _row;
}
bool Cell::value() {
    return _value;
}
void Cell::setExplored(){
    _explored = true;
}
bool Cell::isExplored(){
    return _explored;
}
void Cell::setPath(){
    _path = true;
}
bool Cell::isPath(){
    return _path;
}