//FOR... 

#include <iostream>
using namespace std;
int main()
{
    // for -> contador i
    // distribuidora de control

    // estructura: for (inicializacion; limite; incremento)
    for (int i = 0; i <= 9; i++)
    {
        // Aqui van las instrucciones
        cout << i << " , ";
    }
    cout << endl;

    std::cout << "Hello World!\n";
}

{ // Para disminuir:
  for (int i = 9; i >= 0; i--)
  {
      cout << i << " , ";
  }
  cout << endl;
}
