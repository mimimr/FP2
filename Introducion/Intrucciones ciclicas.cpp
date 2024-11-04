// Instrucciones ciclicas

#include <iostream>
using namespace std;

int main()
{
    // Parte 1. While ():
    // Es una instrucción cíclica que valida un argumento booleano, mientras se cumpla este, seguirá ejecutando las instrucciones que estan dentro de los límites de ella
    int i = 0;
    while (i <= 9)
    {
        cout << i << ",";
        i++;
    }

    std::cout << "Hello World!\n";
}
