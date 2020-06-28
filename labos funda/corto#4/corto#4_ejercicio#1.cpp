#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main (void){
std::string palabranormal; std::string murcielago[] = {"m","u","r","c","i","e","l","a","g","o"}; int z; int x;
cout << "escribe la palabra que desea transformar ";
cin >> palabranormal;
for (int x = 0; x < palabranormal.length();x++){
    for (int z = 0; z < 10; z++){
        string cambio; 
        cambio = palabranormal[x];
        if (cambio== murcielago[z])
        palabranormal [x] = to_string(z)[0];
    }
}
cout << "la palabra cuando el cambio realizado es : " << palabranormal; 
}