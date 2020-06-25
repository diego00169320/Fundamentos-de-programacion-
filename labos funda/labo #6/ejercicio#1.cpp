#include <iostream>
#include <math.h>
using namespace std;
int main (void){
    int pos=0; int array [100];int x; 
    for (x=1; x<200; x++){
        if(x%2!=0){
            array[pos]=x;
            pos++;
        }
    }
    for (pos=99; pos>=0; pos--){
        cout<< "#"<< pos+1 << "-" << array[pos] << "\n";
    }
}