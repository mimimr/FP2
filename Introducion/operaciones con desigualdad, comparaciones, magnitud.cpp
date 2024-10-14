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

    // 9. Combinacion de comparaciones (tambien se puede usar "and" en lugar de &&/ tambien usar "or" en vez de ||)
    cout << "((n1 < n2) && (f1 > f2)): " << ((n1 < n2) && (f1 > f2)) << endl;
    cout << "((n1 == 10) || (f1 == 5.2)): " << ((n1 == 10) || (f1 == 5.2)) << endl;

    // 10. Comparaciones anidadas
    cout << "(n1 > n2 - 10): " << (n1 > n2 - 10) << endl;
    cout << "(f1 <= f2 + 10.5): " << (f1 <= f2 + 10.5) << endl;

    // 11. Comparacion con constantes
    cout << "(n1 == 10):" << (n1 == 10) << endl;
    cout << "(f1 == 5.2): " << (f1 == 5.2) << endl;

    // 12. Comparacion con los resultados de las operaciones aritmeticas
    cout << "((n1 + n2) < (f1 * f2)): " << ((n1 + n2) < (f1 * f2)) << endl;
    cout << "((n1 + n2) >= (f1 / f2)): " << ((n1 + n2) >= (f1 / f2)) << endl;

    // 13. Comparacion de resultados negativos y positivos
    cout << "((-n1) < n2): " << ((-n1) < n2) << endl;
    cout << "((-f1) > f2): " << ((-f1) > f2) << endl;

    // 14. Combinacion aritmetica y comparacion
    cout << "((n1 * n2) > (f1 - f2)): " << ((n1 * n2) > (f1 - f2)) << endl;
    cout << "((n1 / n2) <= ((-f1) + f2)): " << ((n1 / n2) <= ((-f1) + f2)) << endl;

    // 15. Comparaciones encadenadas
    cout << "(n1 < n2 and n2 < f1): " << (n1 < n2 and n2 < f1) << endl;
    cout << "(f1 > f2 and f2 > n1): " << (f1 > f2 and f2 > n1) << endl;

    // 16. Comparacion de modulos
    cout << "((n2 % n1) == 0): " << ((n2 % n1) == 0) << endl;

    // Operaciones logicas
    bool p = true, q = false;

    // 17. Logica AND
    cout << "(p and q): " << (p and q) << endl;

    // 18. OR Logico
    cout << "(p or q): " << (p or q) << endl;

    // 19. Logico NOT
    // Puedes usar "not" en lugar de !
    cout << "(!p): " << (not q) << endl;

    // 20. Combinacion de AND y NOT
    cout << "(p and not(q)): " << (p and not(q)) << endl;

    // 21. Doble NOT
    cout << "(not(not(q))): " << (not(not(q))) << endl;

    // 22. Operaciones mixtas
    cout << "(not(p and q) or (p or not(q))): " << (not(p and q) or (p or not(q))) << endl;

    // 23. Asignacion de variables con operadores logicos
    bool a = p and q;
    cout << "Valor asignado a variable 'a': " << a << endl;

    // 24. Operaciones logicas con numeros enteros (distintos de 0 es verdadero, cero es falso
    int x = 5, y = 0;
    cout << "(x and y): " << (x and y) << endl;
    
    // 25. Operaciones logicas con tipos de datos mixtos
    float m = 3.5, n = 0.0;
    cout << "(m or n): " << (m or n) << endl;

    // 26. Expresiones complejas
    cout << "((p or q) and (x or n)): " << ((p or q) and (x or n)) << endl;

    // 27. Expresiones anidadas
    cout << "((x and not (y)) and (m or not (q))): " << ((x and not (y)) and (m or not (q))) << endl;

    // 28. Operaciones logicas con numeros de punto flotante
    cout << "((m > n) and (m <= 3.5)): " << ((m > n) and (m <= 3.5)) << endl;

    // 29. Uso de operaciones logicas con comparacion de cadenas de texto (string)
    string str1 = "hola", str2 = "mundo";
    cout << "((str1 == str2) or (str1 != str2)): " << ((str1 == str2) or (str1 != str2)) << endl;

    std::cout << "Hello World!\n";
}
