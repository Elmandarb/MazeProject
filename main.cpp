
#include <iostream>
#include "Maze.hpp"
#include "Cell.hpp"
#include "EdgeFinder.hpp"
#include "MazeSolver.hpp"
#include "adjacentCell.hpp"
int main(int argc, char *argv[]) {
    // cd cs315
    // 2d vector and a stack for the squares that you traverse
    //data called pair to keep track or horiz and vert
    // mazesolver class that takes in input file and outputs the path
    // output goes to stdout
    if(argc != 2) {
        std::cout << "This application expects a single argument" << std::endl;
        exit(1);
    }
    Maze mazeIn(argv[1]);
    EdgeFinder finder(mazeIn);
    adjacentCell adj(mazeIn);
    //std::cout << "found edge \n";
    MazeSolver solver(mazeIn, finder.start(), finder.end());
    //std::cout << "solved maze \n";


    Cell test = finder.start();
    std::cout << test.value() << std::endl;
    std::cout << test.x() << std::endl;
    std::cout << test.y() << std::endl;
    std::cout << test.isPath() << "\n" << std::endl;

    Cell testTwo = finder.end();
    std::cout << testTwo.value() << std::endl;
    std::cout << testTwo.x() << std::endl;
    std::cout << testTwo.y() << std::endl;
    std::cout << test.isPath() << std::endl;

    std::cout << mazeIn.getWidth() << std::endl;
    std::cout << mazeIn.getHeight() << std::endl;
    std::cout << "The number of arguments is " << argc << std::endl;
    for(int i = 0; i< argc; i++) {
        std::cout << "i = " << i << "  " << argv[i] << std::endl;
    }

    return 0;
}
