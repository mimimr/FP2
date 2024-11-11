// ARREGLOS

#include <iostream>
using namespace std;
int main()
{
    // Compocicion lineal
    // ¿Como se declara?

    const int TAMANO = 10;
    int naturales[TAMANO]
    { 0,1,2,3,4,5,6,7,8,9 };

    /*cout << naturales[0] << endl;*/
    /*naturales[0] = -1000; */
    /*cout << naturales[0] << endl; */

    for (int i = 0; i < TAMANO; i++)
    {
        cout << naturales [i] << endl;
    }
    // O tambien:
    for (int elemento : naturales)
    {
        cout << elemento << endl;
    }


    // [] -> Operador indice
    // {} -> Conjunto de datos separados por ",". Sirve para inicializar arreglos
    // : -> Operador referencia
    /* Estos arreglos son de una dimension, es decir que solamente es lineal */


    std::cout << "Hello World!\n";
}
