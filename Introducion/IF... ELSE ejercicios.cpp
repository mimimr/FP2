// Ejercicios If... Else

#include <iostream>
using namespace std;

int main()
{
    // 1. Encontrar si un número es par o impar.
    int num = 0;
    cout << "Dame un valor: ";
    cin >> num;
    cout << endl;
    if (num % 2 == 0) // Nunca lleva al final ";"
    {
        cout << "par: " << endl;
    }
    else // Nunca lleva condicion
    {
        cout << "impar: " << endl;
    }
}
