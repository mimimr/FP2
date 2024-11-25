// PRACTICA#J
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    srand(time(NULL)); //Semilla aleatoria
    int arreglo[10];
    for (int a = 0; a <= 9; a++)
    {
        arreglo[a] = rand() % 101;
    }
    for ( int elemento : arreglo)
    {
        cout << elemento << endl;
    }


    //  Ejercicio 1:
    int numeros[10];
    int num, i = 0;
    num = -1;
    while (num != 0)
    {
        cout << "Numero: ";
        cin >> num;
        if (num == 0 and i > 9)
        {
            break;
        }
        numeros[i] = num;
        i++;
    }
    for (int elemento : numeros)
    {
        cout << elemento << endl;
    }


    
    // Ejercicio 4.
    srand(time(NULL));
    int total = 0;
    int promedio = 0;
    int mayor = -1;
    int arreglin[10];
    
    for (int i = 0; i <= 9; i++)
    {
        arreglo[i] = rand() % 100;
        total = total + arreglo[i];
    } 
    if (arreglo[i] >= promedio)
    {
        promedio = arreglo[i];
    }
    

        

    std::cout << "Hello World!\n";
}
