// PRACTICA#G

#include <iostream>
using namespace std;

int main()
{
    // Act 1.
    string nombreMeses[12]{ "ene","feb","mar","abr","may","jun","jul","ago","sep","oct","nov","dic" };
 
    nombreMeses[0] = "ene";
    nombreMeses[1] = "feb";
    nombreMeses[2] = "mar";
    nombreMeses[3] = "abr";
    nombreMeses[4] = "may";
    nombreMeses[5] = "jun";
    nombreMeses[6] = "jul";
    nombreMeses[7] = "ago";
    nombreMeses[8] = "sep";
    nombreMeses[9] = "oct";
    nombreMeses[10] = "nov";
    nombreMeses[11] = "dic";

    // Act 2.
    for (int i = 0; i < 12; i++)
    {
        cout << nombreMeses[i] << ",";
    }
    cout << endl;
    // O TAMBIEN SE PUEDE:
    for (string mes : nombreMeses)
    {
        cout << mes << endl;
    }

    // Act 3.
    string planetas[9]{ "mercurio","venus","tierra","marte","jupiter","saturno","urano","neptuno","pluton" };

    planetas[0] = "mercurio";
    planetas[1] = "venus";
    planetas[2] = "tierra";
    planetas[3] = "marte";
    planetas[4] = "jupiter";
    planetas[5] = "saturno";
    planetas[6] = "urano";
    planetas[7] = "neptuno";
    planetas[8] = "pluton";

    // Act 4.

    for (string planet : planetas)
    {
        cout << planet << endl;

    }


    std::cout << "Hello World!\n";
}
