#include <iostream>
#include<iomanip>
using namespace std;


int solveKTUtil(int x, int y, int movei, int sol[8][8], int xMove[], int yMove[]);

int isSafe(int x, int y, int sol[8][8])
{
    return (x >= 0 && x < 8 && y >= 0 && y < 8 && sol[x][y] == -1);
}

void printSolution(int sol[8][8])
{
    for (int x = 0; x < 8; x++) {
        for (int y = 0; y < 8; y++)
            cout << " " << setw(2) << sol[x][y] << " ";
        cout << endl;
    }
}

int solveKT()
{
    int sol[8][8];

    for (int x = 0; x < 8; x++)
        for (int y = 0; y < 8; y++)
            sol[x][y] = -1;
    int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
    sol[0][0] = 0;
    if (solveKTUtil(0, 0, 1, sol, xMove, yMove) == 0) {
        cout << "Solution does not exist";
        return 0;
    }
    else
        printSolution(sol);

    return 1;
}
int solveKTUtil(int x, int y, int movei, int sol[8][8],
    int xMove[8], int yMove[8])
{
    int k, next_x, next_y;
    if (movei == 8 * 8)
        return 1;
    for (k = 0; k < 8; k++) {
        next_x = x + xMove[k];
        next_y = y + yMove[k];
        if (isSafe(next_x, next_y, sol)) {
            sol[next_x][next_y] = movei;
            if (solveKTUtil(next_x, next_y, movei + 1, sol,
                xMove, yMove)
                == 1)
                return 1;
            else
                sol[next_x][next_y] = -1;
        }
    }
    return 0;
}

int main()
{
    solveKT();
    return 0;
}

