// SRAND / RAND

#include <iostream>
using namespace std;

int main()
{
    //SRAND minijuego
    srand(time(NULL)); // Semilla aleatoria ejemplo:
    int castigo = 0, i = 0;
    while (i <= 10)
    {
        castigo = rand() % 2;
        cout << castigo << endl;
        i++;
    }

    std::cout << "Hello World!\n";
}
