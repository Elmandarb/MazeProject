//
// Created by Erics on 2/4/2022.
//

#include "MazeSolver.hpp"

MazeSolver::MazeSolver(Maze maze, Cell start, Cell end) {
    // push the start cell onto a stack
    start.setExplored();
    stack.push(start);
    adjacentCell adjacent{maze};

    //while the stack is not empty do
    while(!stack.empty()) {
        //std::cout << "Running while \n";
        //if there is no successor (adjacent cell) for the top element of the stack {
        /*std::cout << "adjacent.getAdj(stack.top()).y() =" << adjacent.getAdj(stack.top()).y() << '\n';
        std::cout << "stack.top().y() =" << stack.top().y() << '\n';
        std::cout << "adjacent.getAdj(stack.top()).x() =" << adjacent.getAdj(stack.top()).x() << '\n';
        std::cout << "stack.top().x() =" << stack.top().x() << '\n';
        adjacent.printMe(); */
        if(adjacent.getAdj(stack.top()).y() == stack.top().y() & adjacent.getAdj(stack.top()).x() == stack.top().x()) {
            //pop the stack
            //stack.top().setExplored();
            stack.pop();
            //std::cout << "popping \n";
        }
            //} else {
        else {
            //let s be a cell that is adjacent to the one that is on top of the stack and has not been explored yet
            Cell s = adjacent.getAdj(stack.top());
            //std::cout << "s.isExplored() = " << s.isExplored() << "\n";
            //push s onto the stack
            stack.push(s);
            //std::cout << "pushing \n";
            //mark s as used (explored)

            adjacent.setTick(s);

            //if s is the target, exit this loop
            if(s.x() == end.x() & s.y() == end.y()) {
                //std::cout << "Exit while \n";
                break;
            }
        }
    }
    if(stack.empty()) {
        std::cout << "There is no path between the cells" << std::endl;
    }
    else {
        while(!stack.empty()) {
            maze.setCellPath(stack.top().y(), stack.top().x());
            stack.pop();
            //std::cout << "setting values \n";
        }
        maze.printGrid();
    }
}