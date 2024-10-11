// Practica #A.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Hice lo mejor que pude pero es trabajo honesto :D

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
    // 1. Declaracion de numero de materias
    int numeroMaterias = 5;
    cout << "Materias: " << numeroMaterias << endl;

    // 2. Declaracion de cuatrimestre cursados
    int cuatriCursados = 5;
    cout << "Cuatrimestres cursados: " << cuatriCursados << endl;

    // 3. Introducir La materia en linea de texto completa (string)
    cin.ignore();
    string nombreMateria;
    cout << "Introduce nombre de la materia: ";
    getline(cin, nombreMateria);
    cout << "Introduce nombre de la materia: " << nombreMateria << endl;

    // 4. Numero de cuenta (string)
    string numeroCuenta;
    cout << "introduce numero de cuenta: ";
    getline(cin, numeroCuenta);
    cout << "Introduce numero de cuenta: " << numeroCuenta << endl;

    // 5. Nombre completo (String)
    string nombreCompleto;
    cout << "Nombre completo: ";
    getline(cin, nombreCompleto);
    cout << "Nombre completo: " << nombreCompleto << endl;

    // 6. Apellido paterno 
    string apellidoPaterno;
    cout << "Apellido paterno: ";
    getline(cin, apellidoPaterno);
    cout << "Apellido paterno: " << apellidoPaterno << endl;

    // 7. Apellido materno
    string apellidoMaterno;
    cout << "Apellido Materno: ";
    getline(cin, apellidoMaterno);
    cout << "Apellido Materno: " << apellidoMaterno << endl;

    // 8. Numero celular (long)
    long int numeroCelular = 5585756358L;
    cout << "Numero de Celular: " << numeroCelular << endl;

    // 9. Numero de casa (long)
    long int numDomicilio = 41L;
    cout << "Numero de domicilio: " << numDomicilio << endl;

    // 10. Correo electronico
    string correoMasusado;
    cout << "Correo que mas uso: ";
    getline(cin, correoMasusado);
    cout << "Correo que mas uso: " << correoMasusado << endl;

    // 11. Correo MyUnitec
    string myUnitec;
    cout << "Correo escolar: ";
    getline(cin, myUnitec);
    cout << "Correo escolar:" << myUnitec << endl;

    // 12. Carrera o Licenciatura
    string carreRa;
    cout << "Carrera que cursa: ";
    getline(cin, carreRa);
    cout << "Carrera qu cursa: " << carreRa << endl;

    // Ejercicio de Variables: Análisis de errores de sintaxis

    // Ejercicio 1. int 1numero = 5; = (La variable no puede iniciar con un numero)
    
    // Ejercicio 2: float valor@ = 3.14; = (Valor no valido)
    
    // Ejercicio 3: double double = 9.81; = (Palabra reservada)
    
    // Ejercicio 4: char letra = 'AB'; = (Solo puede estar una letra)
    
    //Ejercicio 5: bool esVerdadero = "true"; = (no se que es bool)
    
    //Ejercicio 6: int numero = 10.5; = (tiene que ser numero entero¿?)
    
    // Ejercicio 7: string nombre = 'Juan'; = (Es necesario poner las "")

    // Ejercicio 8: const int PI = 3.14; = (neceasrio poner "float" ya que el numero de PI no cambia)
    
    // Ejercicio 9:  int suma = 5 + ; = (Falta el otro numero a sumar¿?)
    
    // Ejercicio 10:  int numero; numero = 10 = (No esta el ";" al final del 10)
    
    // Ejercicio 11:  int numero = "diez"; = (Se debe de poner el numero y quitar las comillas, creo)
    
    // Ejercicio 12:  float altura = 1, 75; = (Debe ser un punto y no una coma entre el 1 y el 75)
    
    // Ejercicio 13:  char inicial = "J"; = (Deben ser las '' y no las ""¿creo?)
    
    // Ejercicio 14: bool esMayor = 1; = (Falta el true)
    
    // Ejercicio 15: string apellido = Juan; = (No hay comillas "")
   
    // Ejercicio 16:  int resultado = 5 *; = (Falta el otro valor para llegar a la respuesta)
    
    // Ejercicio 17: double area = 3.14 * radio ^ 2; = (valor no valido)
    
    // Ejercicio 18:  int edad = 25 = (Ausencia del ";" al final de 25)
    
    // Ejercicio 19 : float peso = 70.5f; = (Creo que la "f" no deberia de estar ¿?)
        
    // Ejercicio 20: int suma = 10 + 20 = (no hay ";" al final de la suma)
     
   
   

    
    std::cout << "Hello World!\n";
}
