#include <iostream>
#include <string.h>
using namespace std;
int main (void)
{
    int a=0; int b=0; int c=0;
    cout << "Ingrese dividendo ";
    cin >> a;
    cout << "ingrese el divisor ";
    cin >> b;
    c= a%b;
    if (c ==0)
    {
        cout << "si son divisores";
    } 
    else  
    {
        cout << "no son divisores";
    }
}
