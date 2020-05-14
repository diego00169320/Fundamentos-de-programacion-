#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    double A; double B; double C; double numerador1; double denominador; 
    double respuesta1; double respuesta2; double numerador2; double raiz; double potencia=2;
    cout << "ingrese valores de A";
     cin >>A;
     cout << "ingrese valor de B";
     cin >>B;
     cout << "ingrese valor de C";
     cin >> C;
     raiz= pow(B, potencia)-4*A*C;
     numerador1= -B+ sqrt(raiz);
     numerador2= -B- sqrt(raiz); 
     denominador= 2*A;
     respuesta1= numerador1/denominador;
     respuesta2= numerador2/denominador;
     cout<< "Respuesta #1 es: "; cout<< respuesta1; cout<< " respuesta #2 es: "; cout<< respuesta2;
}