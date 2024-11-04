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

  
    // Parte 2: Do... While ()
    // Es una instrucción de control que se ejecuta mientras se cumple la condición de la instrucción. 
    // SU gran diferencia es que al menos se ejecuta una vez, mientras el while, puede que no se ejecute.

    // Ejercicio 1:
    int opcion1 = 0;
    do
    {
        cout << "Menu opciones" << endl;
        cout << "1.- Ejecute opcion 1" << endl;
        cout << "2.- Ejecute opcion 2" << endl;
        cout << "3.- Ejecute opcion 3" << endl;
        cout << "4.- Ejecute opcion 4" << endl;
        cout << "5.- Ejecute opcion 5" << endl;
        cout << "6.- Salir" << endl;
        cin >> opcion1;
    } while (opcion1 != 6);

    std::cout << "Hello World!\n";
}
