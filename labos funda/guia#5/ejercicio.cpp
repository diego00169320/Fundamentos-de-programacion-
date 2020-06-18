#include <iostream>
using namespace std;
int funcion (int a , int b);
int main (void)
{
    int a , b , c;
    cout<< "ingrese 2 numeros para conocer su MCD (el primer numero ingresado debe ser mayor que el segundo)" ;
    cin >> a; cin >> b;
    c=funcion (a , b);
    cout<< "el mcd de " << a << " y de " << b << " es: " << c;
}

int funcion (int a , int b)
{
    int c;
    while (b!= 0)
   {
       c = b;
       b = a % b;
       a = c;
   } 
    return a;
}
