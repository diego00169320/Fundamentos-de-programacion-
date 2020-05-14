#include <iostream>
#include <math.h>
using namespace std;
int main (void)
{
    double radio; double perimetro; double area;  double cuadrado=2;
    cout << "ingrese radio del circulo: " << endl;
    cin>> radio;
    area=  pow(radio, cuadrado) *3.14; 
    perimetro= 2*3.14*radio;
    cout << "el area es de: "; cout << area; cout<<"cm^2,"; cout <<" y su perimetro es de: "; 
    cout<< perimetro; cout<<"cm^2." << endl;
}