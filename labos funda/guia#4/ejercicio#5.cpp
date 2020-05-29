#include <iostream>
#include <strings.h>
using namespace std;
int main (void)
{
    string palabra;
    cout << "ingrese una palabra";
    cin >> palabra;
    int F= palabra.length()-1;
    if (palabra[0]==palabra[F])
    {
        cout << "Si tienen la misma letra";
    }
    else
    {
        cout << "No tienen la misma letra";
    }
}