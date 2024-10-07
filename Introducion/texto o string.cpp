// Ejerciciosenclase.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    // EJERCICIO 4
    // Introducir una linea completa de texto (string)
    cin.ignore(); // Ignora la instruccion cin
    string nombreCompleto;
    cout << "Tu nombre completo: ";
    getline(cin, nombreCompleto); // Obtiene una linea completa de texto
    cout << "Tu nombre Completo: " << nombreCompleto << endl;

    // EJERCICIO 5
    // De que tamaño es tu string
    cout << "La longitud del texto es: " << nombreCompleto.length() << endl;

    // EJERCICIO 6
    // [] = Operador indice
    // Como acceder un caracter especifico de un texto (String)
    cout << "El primer caracter de nombre completo es: " << nombreCompleto[0] << endl;

    // EJERCICIO 7
    // Cambiar un caracterer especifico en un texto (string)
    string cambio = "Hola";
    cambio[0] = 'h';
    cout << cambio << endl;

    // EJERCICIO 8
    // Convertir un string a MAYUSCULAS
    string textoMinusculas = "texto a convertir";
    transform(textoMinusculas.begin(), textoMinusculas.end(), textoMinusculas.begin(), toupper);

    //EJERCICIO 9
    // Convertir un string a minuscilas
    string textoMayusculas = "TEXTO A CONVERTIR";
    transform(textoMayusculas.begin(), textoMayusculas.end(), textoMayusculas.begin(), toupper);

    // EJERCICIO 10
    // Insertar untexto dentro del otro
    string textoPrincipal = "Jose";
    textoPrincipal.insert(6, "Luis");
    cout << textoPrincipal << endl;

    // EJERCICIO 11
    // Revertir texto
    string textoRevertir = "Hola, mundo!";
    reverse(textoRevertir.begin(), textoRevertir.end());
    cout << textoRevertir << endl;

    // EJERCICIO 12
    // Convertir un numero en texto
    int n1 = 123;
    string numeroAtexto = to_string(n1);
    cout << "Numero como string: " << numeroAtexto << endl;

    // EJERCICIO 13
    // Convertir un string a numero
    string textoAnumero = "123";
    int n2 = stoi(textoAnumero);
    cout << "String como numero: " << n2 << endl;
        
    
    std::cout << "Hello World!\n";
}
