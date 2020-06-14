#include <iostream>
#include <math.h>
using namespace std; 
bool ciclog (int x);
int main (void) // Main 
{
    int numm=75; int intentos= 5; 
    while (intentos!=0) // ciclo while 
    {
        int elecc=0;
        cout << "\n intente adivinar el numero \n menu \n 1-Intentar adivinar numero \n 2-no adivinar \n";
        cin >> elecc;// entrada de datoss 
        if (elecc==1){
            int num=0;
            cout <<"seleccione un numero del 1 al 100 ";
            cin >> num;
            bool resultado = ciclog(num);//comparacion  de datos 
            if (resultado)
            {
                break;
            }
            else 
            {
                intentos--;//reduccion de intestos para poder detener el while 
            }

            
        }
        
        
        else
        {
            intentos=0;  //detener el proceso por decision del usuario 
        }
        

    }
    cout << " fin del juego el numero era: " << numm;
}
//comparacion de datos por medio de una funcion 
bool ciclog (int x){
int numm=75;
            if (x==numm)
            {
                cout<< "Felicidades! adivinaste el numero ";
                return true;
            }
            if (x>numm)
            {
                cout<< " fallaste el numero ingresado es mayor ";
                return false; 
            }
            if (x<numm)
            {
                cout << "fallaste el numero ingresado es menor ";
                return false;
            }
        }

