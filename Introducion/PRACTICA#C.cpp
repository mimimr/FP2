// Practica C

#include <iostream>
using namespace std;

int main()
{
    // 1.1 El cuadrado de un numero
    int numero;
    cout << "Dame un numero: ";
    cin >> numero;
    cout << "El cuadrado de este numero es: " << (numero * numero) << endl;

    // 1.2 x 2x 3x 4x 5x
    int n1;
    cout << "Ingresa un numero: ";
    cin >> n1;
    cout << "El resultado de x es: " << (1 * n1) << endl;
    cout << "El resultado de 2x es: " << (2 * n1) << endl;
    cout << "El resultado de 3x es: " << (3 * n1) << endl;
    cout << "El resultado de 4x es: " << (4 * n1) << endl;
    cout << "El resultado de 5x es: " << (5 * n1) << endl;

    // 1.3 Kilogramo a libra
    int kilogramo;
    cout << "Dame tu peso: ";
    cin >> kilogramo;
    cout << "Tu peso en libras es: " << (kilogramo * 2.2) << endl;

    // 1.4 Total y promedio
    int no1;
    cout << "Dame un numero: ";
    cin >> no1;
    int no2;
    cout << "Dame un numero: ";
    cin >> no2;
    int no3;
    cout << "dame un numero: ";
    cin >> no3;
    cout << "La suma total es de: " << (no1 + no2 + no3) << endl;
    cout << "El promedio es de: " << ((no1 + no2 + no3) / 3) << endl;

    // 1.5 Porcentaje de propina a dar
    int proTotal;
    float Porcentaje;
    cout << "Cuenta total: ";
    cin >> proTotal;
    cout << "Porcentaje de Propina a dar:";
    cin >> Porcentaje;
    cout << "Propina total a dar: " << (proTotal / porcentaje) << endl;


    

    std::cout << "Hello World!\n";
}
