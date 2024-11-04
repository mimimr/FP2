// Practica #D

#include <iostream>
using namespace std;

int main()
{
    // 1.16 Mayor o igual que
    int A = 1, B = 10, C = 100;

    if (A >= B and A >= C)
    {
        cout << "Mayor es A" << endl;
    }
    if (B >= A and B >= C)
    {
        cout << "Mayor es B" << endl;
    }
    if (C >= A and C >= B)
    {
        cout << "Mayor es C" << endl;
    }

    // 1.17 
    int a = 10, b = 5, c = 1;

    if (a <= b and a <= c)
    {
        cout << "Menor es A" << endl;
    }
    if (b <= a and b <= c)
    {
        cout << "Menor es B" << endl;
    }
    if (c <= a and c <= b)
    {
        cout << "Menor es C" << endl;
    }
    // 1.18 Solicita la hora
    
    // 1.19 Precio de un boleto
    int dias, distancia;
    cout << "Dias: ";
    cin >> dias;
    cout << endl;
    cout << "Distancia: ";
    cin >> distancia;
    cout << endl;
    if (dias >= 7 and distancia >= 800)
    {
        cout << "Descuento del 30%" << endl;
    }
    else
    {
        cout << "Precio normal" << endl;
    }

    // 1.20 
    // a) angulo
    int angulo;
    cout << "Incerte angulo";
    cin >> angulo;
    cout << endl;
    if (angulo >= 90)
    {
        cout << "Es un angulo recto" << endl;

    }
    else
    {
        cout << "El angulo no es recto" << endl;
    }
    // b) Temperatura
    int tempe;
    cout << "Dame la temperatra";
    cin >> tempe;
    cout << endl;
    if (tempe > 100)
    {
        cout << "Por encima del punto de ebullicion del agua" << endl;
    }
    else
    {
        cout << "Por debajo del punto de ebullicion del agua" << endl;
    } 
    // c) numero positivo y negativo
    
    // d) mayor o menor que
    int x, y, z;
    cout << "X= ";
    cin >> x;
    cout << endl;
    cout << "Y= ";
    cin >> y;
    cout << endl;
    cout << "Z= ";
    cin >> z;
    cout << endl;
    if (x > y and z < y)
    {
        cout << "X" << endl;
    }
    else
    {
        cout << "Y o Z" << endl;

    }



    std::cout << "Hello World!\n";
}
