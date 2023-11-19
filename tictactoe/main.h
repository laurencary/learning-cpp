#pragma once
#include <string>

class Board
{
private:
    std::array<std::string, 9> m_Grid = {"_", "_", "_", "_", "_", "_", "_", "_", "_"};

public:
    Board();
    const void printBoard();
    bool validPos(std::vector<int> pos);
};
