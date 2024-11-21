// PRACTICA#I
#include <iostream>
using namespace std;

int main()
{
    int sudoku[9][9]{ {0,3,4,9,5,4,8,0,0},
        {0,0,2,3,5,5,7,0,9},
        {2,5,7,9,0,0,0,4,6},
        {6,0,0,0,3,4,8,7,2},
        {3,0,0,0,4,5,8,1,6},
        {0,0,3,5,9,6,7,2,0},
        {1,6,8,0,0,0,0,0,0},
        {6,0,5,4,7,8,2,1,0},
        {0,0,0,1,0,1,2,3,0} };

    for (int i =0; i <=1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << sudoku[i][j] << endl;
        }
    }


    std::cout << "Hello World!\n";
}
