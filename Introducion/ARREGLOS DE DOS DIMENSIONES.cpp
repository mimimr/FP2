// ARREGLO DE DOS DIMENSIONES

#include <iostream>
using namespace std;

int main()
{
    /* Definicion: El arreglo bidimensional es una colección de valores, del mismo tipo de datos, de un valor finito.*/ 
    /* Que se componen de renglones y columnas, normalmente denominados nxm.*/

    
    int matriz[2][2]{ {1,2},{3,4} };
    for (int i = 0; i <= 1; i++)
    {
        for (int h = 0; h <= 1; h++)
        {
            cout << matriz[i][h] << endl;
        }
    }



    std::cout << "Hello World!\n";
}
