#include <iostream>

using namespace std;
int main (void) 
{
    int h , m , s;
    cout << "ingrese hora ";
    cin >> h;
    cout << "ingrese minutos ";
    cin >> m;
    cout << "ingrese y segudos ";
    cin >> s;  
    if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 )
    {
        s++;
        if ( s == 60 )
        {s = 0;
            m++;
            if ( m == 60 )
            {
                m = 0;
                h++;
                if ( h == 24 )
                    h = 0;
            }
        }
        cout << "\n   Un segundo despues la hora es: " << h << ":" << m << ":" << s;
    }
     
    else
    {
        cout << "\n   ERROR: La hora es incorrecta." ;
    }
}