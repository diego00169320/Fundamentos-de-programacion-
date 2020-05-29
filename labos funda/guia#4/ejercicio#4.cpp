#include <iostream>
using namespace std;
int main (void)
{
    string frase;
    cout << "Intredusca una palabra ";
    cin >> frase;
    if (frase.length()>=10)
    {
        cout << "la palabra tiene mas de 10 caracteres ";
    }
    else
    {
        cout << "la palabra tiene menos de 10 caracteres ";
    }
    if (frase.length()%2==0)
    {
        cout << "if es par";
    }
    else
    {
        cout<< "es impar";
        
    }
}