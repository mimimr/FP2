// PRACTICA#J
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    srand(time(NULL)); //Semilla aleatoria
    int arreglo[10];
    for (int a = 0; a <= 9; a++)
    {
        arreglo[a] = rand() % 101;
    }
    for ( int elemento : arreglo)
    {
        cout << elemento << endl;
    }


    //  Ejercicio 1. Forma 1:
    int numeros[10];
    int num, i = 0;
    num = -1;
    while (num != 0)
    {
        cout << "Numero: ";
        cin >> num;
        if (num == 0 and i > 9)
        {
            break;
        }
        numeros[i] = num;
        i++;
    }
    for (int elemento : numeros)
    {
        cout << elemento << endl;
    }

    // Ejercicio 1. Forma 2:
    
     vector <int> numeros;
 int num;
 num = -1;
 while (num != 0)
 {
     cout << "Numeros: ";
     cin >> num;
     if (num == 0)
     {
         break;
     }
     numeros.push_back(num);
 }
 for (int elementos : numeros)
 {
     cout << elementos << endl;
 }

     // Ejercicio 3.
  int numeros[10]
  { 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };
  vector <int> vnum
  { 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };
  int mayor = -1;
  for (int i = 0; i <= 9; i++)
  {
      if (vnum[i] > mayor)
      {
          mayor = vnum[i];
      }
  }

    // Ejercicio 4.
    srand(time(NULL));
    int total = 0;
    int promedio = 0;
    int mayor = -1;
    int arreglin[10];
    
    for (int i = 0; i <= 9; i++)
    {
        arreglo[i] = rand() % 100;
        total = total + arreglo[i];
    } 
    if (arreglo[i] >= promedio)
    {
        promedio = arreglo[i];
    }

  // Ejercicio 8.
  int numeros[10]
  { 34,23,94,53,16,27,5,25,42,82 };
  int primero, segundo, tercero, temp =0;
  primero = numeros[0];
  segundo = numeros[1];
  tercero = numeros[2];
  if ( primero < segundo)
  {
      temp = primero;
      primero = segundo;
      segundo = temp;
  }
  if (primero < tercero)
  {
      temp = primero;
      primero = tercero;
      tercero = temp;
  }
  if (segundo < tercero)
  {
      temp = segundo;
      segundo = tercero;
      tercero = temp;
  }
  for (int i = 3; i <= 9; i++)
  {
      if (numeros[i] > primero)
      {
          tercero = segundo;
          segundo = primero;
          primero = numeros[i];
      }
      else if (numeros[i] > segundo)
      {
          tercero = segundo;
          segundo = numeros[i];
      }
      else if (numeros[i] > tercero)
      {
          tercero = numeros[i];
      }

  }
  cout << primero << endl;
  cout << segundo << endl;
  cout << tercero << endl;
 



        

    std::cout << "Hello World!\n";
}
