#include <iostream> 
using namespace std;
double promedio(double x);
int bajo_el_promedio (double y, double z);
double arriba_del_promedio (double y, double z);
int main (void){
    double array[25]; int i; double suma; double prom; double apromedio; int cpromedio=0; double sumatoria; double alumno;
    for (i=0; i<25; i++ ){
        cout << "ingrese la altura de 25 estudiantes";
        cin >> array [i];
    }
    for (i=0;i<25; i++){
        suma+=array[i];
    }
    prom=promedio (suma);
    
    for (i=0; i<25; i++){
    alumno=array[i]; 
    cpromedio+=bajo_el_promedio(alumno, prom);
    }
    
    for (i=0; i<25; i++){
    alumno=array[i]; 
    apromedio+=arriba_del_promedio(alumno, prom);
    }
    cout << "el promedio de altura es de: " << prom 
    << " la cantidad de personas que estan  arriba del promedio son: " 
    << apromedio << " y la cantidad que estan abajo es de: "<< cpromedio ;
}

double promedio (double x){
    double promedio;
    promedio=x/25;
    return promedio;
}
int bajo_el_promedio ( double y, double z){ 
    int bpromedio=0; int i;

        if(y<z){
            bpromedio++;
        }

    return bpromedio;
}
double arriba_del_promedio (double y , double z){ 
    double apromedio=0; int i;

        if(y>z){
            apromedio++;
        }

    return apromedio;
}