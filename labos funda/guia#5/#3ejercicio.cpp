#include <iostream>
using namespace std;
bool ano (int x);

//Main 
int main (void)
{  
    int a;  //entrada de datos 
    cout << "Inserte el ano que quiere ver si es bisiesto: ";
    cin >> a;
    bool c=ano(a);
    if (c)//operacion 
    {
       cout << "si, el ano es bisiesto." ;
    }
    if (c==false)
    {
         cout << "no el ano  no es bisiesto.";

    }
    

}

//comprobacion de los años 
bool ano (int x)

{
    int b; int c; int d;
    b=x%400;
    c= x%4;
    d= x%100;
    if (b==0)
    { 
        
        return true ;
    }
    if (c ==0)
    {
        if (d !=0)
        {
            
            return true ;
        }
        else 
        {
            return false;
        }
    }
     else 
        { 
            return false;
        }
}
