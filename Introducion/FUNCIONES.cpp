//FUNCIONES

#include <iostream>
using namespace std;
//Funciones:
void hola()
{
    cout << "Hola lol" << endl;
}
void suma()
{
    int n1, n2;
    cout << "numero: ";
    cin >> n1;
    cout << "numero 2: ";
    cin >> n2;
    cout << n1 + n2 << endl;
}
//No puedo definir funciones dentro de otras funciones
int main() //Punto de entrada
{
    hola(); //Invoca a llamar la funcion
    suma();

    std::cout << "Hello World!\n";
}
