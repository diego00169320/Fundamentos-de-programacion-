# include <iostream>
using namespace std;
int main (void)
{
    int a;
    cout << "ingrese un numero  para saber si es negativo positivo o 0 ";
    cin >>a;
    if (a>0)
    {
        cout << "el numero introducido es positivo ";
    }
    if (a==0)
    {
        cout  << "el numero introducido es 0";
    }
    if (a<0)
    {
        cout << "el nummero introducido es negativo";
    }
}