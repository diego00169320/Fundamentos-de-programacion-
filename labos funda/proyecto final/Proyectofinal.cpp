#include <iostream>
#include <strings.h>
using namespace std;
const int longCad=20; 
    struct Factura { //declaracion de la estructura "factura"
        char nombreArticul[longCad + 1];
        int cantidad;
        float precio;                           
        float costoPorArticulo;
    };
    Factura datos (Factura y); 
    float precio_total (Factura x);
    Factura Impresion (Factura z);
    float total_a_pagar(float a);
    
    int main (void){
    int productos=0; float preciofinal=0;
    cout<< "cuantos productos diferentes ha comprado \n";
    cin>> productos;
    Factura facturar [productos]; //declaracion array
    for (int x=0; x<productos; x++){
     facturar[x]=datos (facturar[x]); //uso de funcion para poder agregar los datos a la factura 
    }
    for (int x=0; x<productos; x++){
     facturar[x].costoPorArticulo=precio_total (facturar[x]); //funcion que calcula el precio total de los articulos 
    }
    cout << "nombre\t" <<"cant.\t"<<"precio\t"<<"total\t" << "\n"; // salida de datos utilizando un \t para que puedan verse en forma de tabla 
    for (int x=0; x<productos; x++){
        Impresion (facturar[x]);
    }
    for (int x=0; x<productos; x++){
        preciofinal += total_a_pagar (facturar[x].costoPorArticulo); //funcion que calcula el gasto total en los productos 
    }

    cout << "El total a pagar es: " << preciofinal;
}

Factura datos (Factura y){ //funcion utiliada para ingresar los datos al array 
    cout << "ingrese nombre del articulo: \n";
    cin >> y.nombreArticul; //se le llama la parte especifica del array para que se almacenen correctamente 
    cout << "ingrese cantidad de productos: \n";
    cin >> y.cantidad;
    cout << "ingrese el precio del producto: \n";
    cin >> y.precio;
    return y;
}

float precio_total (Factura x){
    x.costoPorArticulo=x.cantidad*x.precio; // se le llama las partes de cantidad y precio para que se puedan almacenar los datos 
    return x.costoPorArticulo; // en costo por articulo el cual es retornado 
}
Factura Impresion (Factura z){
     cout <<z.nombreArticul << "\t";
     cout <<z.cantidad << "\t"; // se da una salida a cada dato por separado para que pueda verse como tabla
     cout << z.precio << "\t";
     cout << z.costoPorArticulo<< "\t" << "\n";
}
float total_a_pagar(float a){
    float suma=0;
    suma +=a; 
    return a;
}