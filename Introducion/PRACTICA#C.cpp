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
    cout << "Propina total a dar: " << (proTotal / Porcentaje) << endl;

    // 1.6 IF ELSE EJERCICIO 1
    {
        int n1;
        cout << "n1: ";
        cin >> n1;
        cout << endl;
        if (n1 > 100)
        {
            cout << "El numero es mayor a 100: " << n1 << endl;

        }
        else
        {
            cout << "Es menor o igual a 100: " << n1 << endl;
        }

        // 1.7 IF ELSE EJERCICIO 2
        int nu1;
        cout << "Incerte un numero: ";
        cin >> nu1;
        cout << endl;
        if (nu1 < 0)
        {
            cout << "Numero negativo";
        }
        else
        {
            cout << "numero Positivo";
        }


        // 1.8 IF ELSE EJERCICIO 3
        int Miemail;
        cout << "Incerte su mail: ";
        cin >> Miemail;
        cout << endl;
        int pasword;
        cout << "Incerte password: ";
        cin >> pasword;
        cout << endl;
        if (pasword == 12345)
        {
            cout << "Pasword valido";
        }
        else
        {
            cout << "Pasword invalido";
        }


        // 1.9 IF ELSE EJERCICIO 4
        int Farenheith;
        cout << "Incerte temperatura en F°: ";
        cin >> Farenheith;
        cout << endl;

        if (Farenheith == 32)
        {
            cout << "Es igual a cero";
        }
        if (Farenheith < 32 and Farenheith > 32)
        {
            cout << ((Farenheith - 32) * (5 / 9));
            cout << "Es: ";
        }

        // 1.10 IF ELSE EJERCICIO 5
        double peso, estatura;
        double mc;
        cout << "Peso ";
        cin >> peso;
        cout << endl;
        cout << "estatura: ";
        cin >> estatura;
        cout << endl;

        cout << fixed;
        cout << setprecision(2);
        mc = peso / (estatura * estatura);
        cout << "Masa corporal: " << mc << endl;

        if (mc < 18.5)
        {
            cout << "Tu peso es bajo" << endl;
        }
        if (mc >= 18.5 and mc < 25)
        {
            cout << "Peso normal" << endl;
        }
        if (mc >= 25 and mc < 30)
        {
            cout << "Sobrepeso" << endl;
        }
        if (mc >= 30 and mc < 35)
        {
            cout << "Obeso Clase 1" << endl;
        }
        if (mc >= 35 and mc < 40)
        {
            cout << "Obeso clase 2" << endl;
        }
        if (mc >= 40)
        {
            cout << "Obeso clase 3" << endl;
        }

        std::cout << "Hello World!\n";
