#include <iostream>
using namespace std;
double horast (double x);
double horase (double y);
double d1 (double z);
double d2 (double a);
double d3 (double b);
//Main codigo 
int main (void)
{
    double st; double hrs; double hrse; int v=0; double sr=0;double h; double he; // definicion de variables 
    while (v!=2) //ciclo 
    {
        int elec=0; // entrada de datos 
        cout << "\n menu \n 1-calcular salario de trabajadores \n 2-salir del programa \n";
        cin >> elec;
        if (elec==1) //operaciones 
        {
        cout << "ingrese las horas trabajadas : ";
        cin >> hrs;
        cout << "ingrese las horas extras trabajadas : ";
        cin >> hrse;
        h=horast(hrs);
        he=horase(hrse);
        st=h+he;
        sr= st-d1(st)-d2(st)- d3(st);
        cout << "el salario total de "  " es :" << st << "$" // salida de datos 
        << " con los descuentos realizados es de: " << sr << "$";
        }
        else 
        {
            v=2; 
        }
    }

}
//dinero ganado por horas normales 
double horast (double x) {
    double hrst; double phorast =1.75;
    hrst= x*phorast;
    return hrst;        
}
//Dinero ganado por horas extra
double horase (double y)
{
    double thrse; double phorase= 2.50;
    thrse= y*phorase;
    return thrse;
}
//Descuento por la AFP
double d1 (double z){
double AFP= 0.625; double ste; 
ste= z*AFP;
return ste; 
}
//Descuento por el seguro 
double d2 (double a)
{ 
    double seguro= 0.04; double stf;
    stf=a*seguro;
    return stf;
}
//Descuento del impuesto sobre la renta 
double d3 (double b) {
    double renta= 0.10;  double stg;
    if (b>500)
    {
        stg=b*renta; 
        return stg;
        }
    else 
    {
        return 0;
    }
}