// TAREA OPERACIONES

#include <iostream>
using namespace std;

int main()
{
    // 1.1 Operaciones sencillas
    cout << "Resultado ejercicio 1: " << (3 + 5 * 2 / 2 - 1) << endl;
    cout << "Resultado ejercicio 2: " << (3 + 10 / 2 - 1) << endl;
    cout << "Resultado ejercicio 3: " << (3 + 5 - 1) << endl;
    cout << "Resultado ejercicio 4: " << (8 - 1) << endl;
    cout << "Resultado ejercicio 5: " << (1 / 3 * 3) << endl;

    // 1.2. Resultado de una potencia
    int num = 4;
    cout << "La potencia de 4 es: " << (num * num) << endl;

    // 1.3 Convertir a yardas

    //1.4 Problema 1
    int valor = 200000;
    cout << "Devaluacion es: " << (valor * 0.8) << endl;
    cout << "Por Mes:" << ((valor * 0.8) / 5) << endl;

    // 1.5. Porcentaje de deduccion
    int sueldo = 25000;
    cout << "parcial: " << (sueldo - 90) << endl;
    cout << "Impuesto: " << (24100 * 50.015) << endl;

    // 1.6 Operaciones
    int n1 = 3;
    int n2 = 12;
    cout << "Resultado 1: " << (n1 * 4) << endl;
    cout << "Resultado 2: " << (n2 / n1) << endl;
    cout << "Resultado 3: " << (n2 % n1) << endl;
    cout << "Resultado 4: " << (n2 % 7) << endl;
    cout << "Resultado 5: " << (n1 + 3.0) << endl;
    cout << "Resultado 6: " << (10 / 100) << endl;
    cout << "Resultado 7: " << pow(3,2) << endl;



    std::cout << "Hello World!\n";
}