#include "main.h"
#include <iostream>
#include <vector>

Board::Board()
{
    std::cout << "Board Created!" << std::endl;
}

const void Board::printBoard()
{
    for (int i = 0; i < 9; ++i)
    {
        std::cout << m_Grid[i] << " ";
        if ((i + 1) % 3 == 0)
        {
            std::cout << "\n"; // Start a new line after every 3 elements (for a 3x3 grid)
        }
    }
}

bool Board::validPos(std::vector<int> pos)
{
    bool validRow = pos[0] > -1 && pos[0] < 3;
    bool validCol = pos[1] > -1 && pos[1] < 3;

    return validRow && validCol;
}