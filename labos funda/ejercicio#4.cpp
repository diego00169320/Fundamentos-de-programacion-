#include <iostream>

 using namespace std;
 int main (void) 
 {
     string nombrep; int cantp; double precio; double total; 
     cout << "ingrese nombre del producto comprado: ";
     getline(std::cin, nombrep); 
     cout << "ingrese precio del producto: ";
     cin >> precio;
     cout << "ingrese cantidad del producto comprado: ";
     cin >> cantp;
     total= cantp*precio;
     cout << "su producto es: "<<nombrep <<" la cantidad comprada fue de: "<< cantp 
     << " y el gasto total fue de : "<<total <<"$";  
    
 }