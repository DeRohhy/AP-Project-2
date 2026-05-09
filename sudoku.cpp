/*
* ========== Naming Convention Guideline ==========
* Classes & Enums: PascalCase
* Functions: camelCase
* Variables: lower_snake_case
* Constants: UPPER_SNAKE_CASE
* =================================================
*/

#include <iostream>

const int SIZE = 9;

enum class SolveResult
{
    SOLVABLE,
    UNSOLVABLE
};

void readInput(int board[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            std::cin >> board[i][j];
}

SolveResult solve(int board[][SIZE])
{


    return SolveResult::UNSOLVABLE;
}

void printBoard(int board[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            std::cout << board[i][j] << " \n"[j == SIZE - 1];
}

int main()
{
    int board[SIZE][SIZE];

    readInput(board);

    SolveResult result = solve(board);

    if (result == SolveResult::SOLVABLE)
        printBoard(board);
    else
        std::cout << "No solution exists" << std::endl;

    return 0;
}