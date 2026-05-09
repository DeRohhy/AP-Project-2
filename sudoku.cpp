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

void readInput(int board[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            std::cin >> board[i][j];
}

int main()
{
    int board[SIZE][SIZE];

    readInput(board);

    return 0;
}