// CLASE Y OBJETOS

#include <iostream>
using namespace std;
struct Alumno
{
    string nombre;
    int cuenta;
};
int main()
{
    Alumno jose;
    jose.nombre = "Jose";
    jose.cuenta = 15621;

    Alumno polet;
    polet.nombre = "Polet";
    polet.cuenta = 16514;

    cout << "Nombre: " << jose.nombre << endl;
    cout << "Cuenta: " << jose.cuenta << endl;
    cout << endl;
    cout << "Nombre: " << polet.nombre << endl;
    cout << "Cuenta: " << polet.cuenta << endl;


    std::cout << "Hello World!\n";
}
