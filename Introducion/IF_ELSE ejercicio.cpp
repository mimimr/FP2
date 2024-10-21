//ejercicios de IF... ELSE

#include <iostream>
using namespace std;
// Ejercicio 2 Encontrar el mayor o menor de un numero
int main()
{
    int n1, n2;
    cout << "n1: ";
    cin >> n1;
    cout << endl;
    if (n1 > n2)
    {
        cout << "n1: " << n1 << endl;

    }
    else 
    {
        cout << "n2: " << n2 << endl;

    }
//Ejercicio 3 solicitar edad
{
    int edad;
    cout << "dame tu edad: ";
    cin >> edad;
    cout << endl;
    if (edad >= 18)
    {
        cout << "mayor de edad " << endl;

    }
    else
    {
        cout << "menor de edad " << endl;
    }

}
// Ejercicio 4 Temperatura
{
    int temp;
    cout << "Dame la temperatura: ";
    cin >> temp;
    cout << endl;
    if (temp < 10)
    {
        cout << "Hace mucho frio " << endl;
    }
    if (temp >= 10 and temp <= 17)
    {
        cout << "Frio" << endl;
    }
    if (temp > 17)
    {
        cout << "Templado o caluroso:" << endl;
    }

}
// Ejercicio 5 Voto
#include <iostream>
using namespace std;

int main()
{
    char voto = ' ';
    cout << "a favor s/n:";
    cin >> voto;
    if (voto == 's' or voto == 'n' or voto == 'S' or voto == 'N')
    {
        cout << "Voto valido " << endl;
    }
    else 
    {
        cout << "Voto invalido " << endl;
    }

}
// Ejercicio 5 Jornadas laborales
{
	int horasTrabajadas = 0;
	cout << "Horas trabajadas: ";
	cin >> horasTrabajadas;
	cout << endl;
	int horasBono = horasTrabajadas - 40;
	if (horasBono > 0)
	{
		horasBono = horasBono * 75;
		cout << "Bono " << horasBono;
	}
}

