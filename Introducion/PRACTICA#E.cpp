/ Practica #E

#include <iostream>
using namespace std;

int main()
{
     // 1.21 do... while
int respuesta = 0;
do
{
    cout << "¿Quieres salir del ciclo?: " << endl;
    cin >> respuesta;

} while (respuesta != 1);
    
    // 1.22

    
   // 1.23 Saldo y retiro
int sueldo = 3450;
int retiro = 0;
int pin = 1234;
cout << "Cantidad de retiro: ";
cin >> retiro;
if (retiro <= sueldo)
{
    cout << "Saldo suficiente" << endl;
}
if (retiro > sueldo)
{
    cout << "Saldo insuficiente" << endl;
}

cout << "Ingrese pin: ";
cin >> pin;
if (pin == 1234)
{
    cout << "Pin correcto" << endl;
}
else
{
    cout << "Retiro invalido" << endl;
}
    

    // 1.24 SRAND minijuego
    srand(time(NULL)); // Semilla aleatoria
    int castigo = 0;
    int vida = 12;
    int premio = 0;
    cout << "vida inicial: " << vida << endl;
    while (vida > 0)
    {
        //deducir una vida
        vida--;
        cout << "costo de ciclo:" << vida << endl;
        //castigo?
        castigo = rand() % 2;
        if (castigo == 1)
        {
            vida = vida - 3;
            cout << "Castigo" << vida << endl;
        }
        //Premio
        premio = rand() % 2;
        if (premio == 1)
        {
            vida = vida + 3;
            cout << "Premio" << vida << endl;

        }
        cout << "Vida despues de ciclo:" << vida << endl;

    }
    

    std::cout << "Hello World!\n";
}
