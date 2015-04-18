/* TP 2: Número par
   Nahuel de Campos
   18/04/15
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "\nTRABAJO PRACTICO #2: Numero par\n";
    cout << "------------------------------------------------------------\n";

    int a;
    cout << "Ingrese un numero entero\n\n";
    cin >> a;
    bool par = (!(a % 2) && (a != 0));

    if (par)
        cout << "\nEl valor " << a << " es par \n\n";
    else
        cout << "\nEl valor " << a << " no es par \n\n";
}
