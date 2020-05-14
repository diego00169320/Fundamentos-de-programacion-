#include <iostream>
using namespace std;
int main (void)
{
    double num1; double num2; double num3;
    cout <<"Ingrese sus notas para el promedio" << endl; 
    cout << "ingrese nota #1: ";
    cin >>num1;
    cout << "ingrese nota #2: "; 
    cin >> num2;
    cout<< "ingrese nota #3: "; 
    cin>> num3;
    double suma= num1 + num2 + num3;
    double  div= suma/3; 
    cout << "su promedio final es: "; cout << div; 
}