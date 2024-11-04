// Instrucciones ciclicas

#include <iostream>
using namespace std;

int main()
{
    // Parte 1. While ():
    // Es una instrucción cíclica que valida un argumento booleano, mientras se cumpla este, seguirá ejecutando las instrucciones que estan dentro de los límites de ella
    
    // Ejercicio 1: 
    int i = 0;
    while (i <= 9)
    {
        cout << i << ",";
        i++;
    }
    // Ejercicio 2:
    int i = 0, suma = 0;
    while (i <= 9)
    {
        cout << i << ",";
        suma = suma + i;
        i++;
    }
    cout << endl;
    cout << "Total de la suma" << suma << endl;



    std::cout << "Hello World!\n";
}
