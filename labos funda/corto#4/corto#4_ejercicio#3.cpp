#include <iostream>
using namespace std;
double notaM ();
int resultado (int z, int y);
int main (void){
    int cantidadA; int alumno; int notas;
    cout<< "ingrese la cantidad de alumnos";
    cin >> cantidadA;
    double array [cantidadA];
    for (int x=0;x<cantidadA;x++){
        array[x]= notaM ();
    } 
    for (int x=0;x<cantidadA; x++) {
        notas= array[x];
        resultado (cantidadA, notas);
    }
}

double notaM (){
   double nota1=0 ,  nota2=0 , nota3=0 , nota4=0 , nota5=0 , notafinal=0;
    cout<< "ingrese las notas obtenidas";
        cin>> nota1;
        cin>> nota2;
        cin>> nota3;
        cin>> nota4;
        cin>> nota5;
        nota1= nota1*0.20;
        nota2= nota2*0.20;
        nota3= nota3*0.20;
        nota4= nota4*0.20;
        nota5= nota5*0.20;
        notafinal= nota1+ nota2+ nota3+ nota4+ nota5;
        return notafinal;
}
int resultado (int z, int y){
        if(y>6){
            cout << "el alumno " <<  " tiene una nota de " << y << " ha aprovado la materia ";
        }
        if(y==6){
            cout << "el alumno " << " tiene una nota de " << y << " ha aprovado la materia ";
        }
        if(y<6){
            cout << "el alumno " << " tiene una nota de " << y << " ha reprovado la materia ";
        }
}
