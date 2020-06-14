#include <iostream>
using namespace std;
float ano (int x);

//Main 
int main (void)
{
    int a; //entrada de datos 
    cout << "Inserte el ano que quiere ver si es bisiesto: ";
    cin >> a;
    a=ano(a);
    if (a == 1)//operacion 
    {
        cout << "si, el ano es bisiesto."; // salida de datos 
    }
    else
    {
        cout << "no el ano  no es bisiesto." ; //salida de datos 
    }

}

//comprobacion de los años 
float ano (int x)

{
    int b; int c; int d;
    b=x%400;
    c= x%4;
    d= x%100;
    if (b==0)
    { 
        return 1 ;
    }
    if (c ==0)
    {
        if (d !=0)
        {
            return 1 ;
        }
    }
}