//PRACTICA #F

#include <iostream>
using namespace std;
int main()
{
    // Ejercicio. 1. Secuencia disminucion
    for (int i = 9; i >= 0; i--)
    {
        cout << i << " , ";
    }
    cout << endl;

    // Ejercicio 2. Secuencia al 99
    for (int i = 0; i <= 99; i++)
    {
        cout << i << " , ";
    }
    cout << endl;
    
    // Ejercicio 3. Numeros pares

    for (int i = 2; i <= 100; i++)

        {
            cout << i << " , ";
        }
        cout << endl;

    // Ejercicio 4. Minimo y maximo

        int min, max;
        cout << "Dame el minimo: ";
        cin >> min;
        cout << "Dame el maximo: ";
        cin >> max;
        for (int n = min; n <= max; n++)
        {
            cout << n << " , ";
        }
    // Ejercicio 5. 

    std::cout << "Hello World!\n";
}
