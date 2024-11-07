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
     cout << "Vuelves al ciclo" << endl;
     cout << "Salir" << endl;

 } while (respuesta != 1);
    
    // 1.22

    
    // 1.23
    

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
