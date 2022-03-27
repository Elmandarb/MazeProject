//
// Created by Erics on 2/4/2022.
//

#ifndef MAZEPROJECT_CELL_HPP
#define MAZEPROJECT_CELL_HPP


class Cell {
public:
    Cell(int row, int col, bool value);
    Cell();
    int y();
    int x();
    bool value();
    void setExplored();
    bool isExplored();
    void setPath();
    bool isPath();

private:
    int _row, _column;
    bool _value, _explored, _path;
};


#endif //MAZEPROJECT_CELL_HPP
