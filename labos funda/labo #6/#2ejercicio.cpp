#include <iostream>
#include <iostream>
using namespace std;
int main (void){
    int numeroveces; int num; int x; int y; int z; int contador= 0 ;
    cout<< "ingrese la cantidad de numeros que quiere ";
    cin>> numeroveces;
    cout << "ingrese que numero desea saber si se repite ";
    cin>> y;
    int array [numeroveces];
    for (x=0; x<numeroveces; x++){
        cout << "ingrese el #" << x+1 << " ";
        cin>> array[x];
    }
    for (z=0; z<numeroveces; z++){
        if (array[z]==y){
            contador++;
        }
    }
    cout<< "el numero " << y << " se repitio " << contador << " veces.";
}