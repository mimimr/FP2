// Clase 14 de Octubre 2024

#include <iostream>
using namespace std;

int main()
{

    // Enteros
    int n1 = 10;
    int n2 = 20;
     
    //Floats
    float f1 = 1.5;
    float f2 = 5.2;

    cout << boolalpha; // Imprime true en lugar de 1

    // operaciones con desigualdad, comparaciones, magnitud

    // 1. Igualdad
    cout << "(n1 == n2): " << (n1 == n2) << endl;
    cout << "(f1 00 f2): " << (f1 == f2) << endl;

    // 2. DEsigualdad
    cout << "(n1 != n2): " << (n1 != n2) << endl;
    cout << "(f1 != f2): " << (f1 != f2) << endl;

    // 3. Mayor que
    cout << "(n1 > n2): " << (n1 > n2) << endl;
    cout << "(f1 > f2): " << (f1 > f2) << endl;

    // 4. Menor que
    cout << "(n1 < n2): " << (n1 < n2) << endl;
    cout << "(f1 < f2): " << (f1 < f2) << endl;

    // 5. Mayor o igual que
    cout << "(n1 >= n2): " << (n1 >= n2) << endl;
    cout << "(f1 >= f2): " << (f1 >= f2) << endl;

    // 6. Menor o igual que
    cout << "(n1 <= n2): " << (n1 <= n2) << endl;
    cout << "(f1 <= f2): " << (f1 <= f2) << endl;

    // 7. Comparaciones de tipos mixtos
    cout << "(n1 > f2): " << (n1 > f2) << endl;
    cout << "(f1 < n2): " << (f1 < n2) << endl;

    // 8. Valores negativos
    cout << "(n1 > -n2): " << (n1 > -n2) << endl;
    cout << "(f1 < -f2): " << (f1 > -f2) << endl;

    // 9. Combinacion de comparaciones (tambien se puede usar "and" en lugar de &&)
    cout << "((n1 < n2) && (f1 > f2)): " << ((n1 < n2) && (f1 > f2)) << endl;
    cout << "((n1 == 10) || (f1 == 5.2)): " << ((n1 == 10) || (f1 == 5.2)) << endl;

    // 10. Comparaciones anidadas
    cout << "(n1 > n2 - 10): " << (n1 > n2 - 10) << endl;
    cout << "(f1 <= f2 + 10.5): " << (f1 <= f2 + 10.5) << endl;


    std::cout << "Hello World!\n";
}
