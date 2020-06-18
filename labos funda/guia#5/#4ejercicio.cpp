#include <iostream>

using namespace std;
bool ano (int x);
int m31 (int x, int y, int z);
int m30 (int x, int y, int z);
int f29 (int x, int y, int z);
int f28 (int x, int y, int z);

int main (void) 
{
    int x , y , z; 
    cout << "ingrese un ano entre 2000 y 2999";
    cin >> x;
    cout << "ingrese mes ";
    cin >> y;
    cout << "ingrese un dia ";
    cin >> z;
    if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12) 
    {
        m31(x,y,z);  
    } 
     if (y == 2 || y == 4 || y == 6 || y == 9 || y == 11 )
        {
           bool c= ano(x);
           if (y==2)
           {
           
           if (c)
           {
               f29(x,y,z);
           }           
           else
           {
               f28(x,y,z);
           }
           

           }
           else {
               m30(x,y,z);
           }
           
    }
    
}


bool ano (int x)

{
    int b; int c; int d;
    b=x%400;
    c= x%4;
    d= x%100;
    if (b==0)
    { 
        
        return true ;
    }
    if (c ==0)
    {
        if (d !=0)
        {
            
            return true ;
        }
        else 
        {
            return false;
        }
    }
     else 
        { 
            return false;
        }
}
int m31 (int x, int y, int z) 
{
        if ( x>= 2000 && x <= 3000  &&  y>= 1 && y <= 13 && z >= 1 && z <= 31)
    {
        z++;
        if ( z == 32 )
        {z = 1;
            y++;
            if ( y == 12 )
            {
                y= 1;
                x++;
                if ( x == 2999 )
                    x = 3000;
            }
        }
        cout << "\n   Un dia despues de la fecha introducida: " << z << "/" << y << "/" << x;
    }
     
    else
    {
        cout << "\n   ERROR: La fecha introducida no es validda." ;
    }
}
int m30 (int x, int y, int z)
{
        if (  x >= 2000 &&  x <= 3000 &&  y >= 1 &&  y <= 13 &&  z >= 1 &&  z<= 31 )
    {
        z++;
        if ( z == 31 )
        {z = 1;
            y++;
            if ( y ==12 )
            {
                y = 1;
                x++;
                if ( x == 2999 )
                    x= 3000;
            }
        }
        cout << "\n   Un dia despues de la fecha introducida: " << z << "/" << y << "/" << x;
    }
     
    else
    {
        cout << "\n   ERROR: La fecha introducida no es valida." ;
    }
}
int f29 (int x, int y, int z)
{
    if ( x >= 2000 && x <= 3000 && y >= 1 && y <= 13 && z >= 1 && z <= 29 )
    {
        z++;
        if ( z == 30 )
        {z = 1;
            y++;
            if ( y == 12 )
            {
                y = 1;
                x++;
                if ( x == 2000 )
                    x = 3000;
            }
        }
        cout << "\n   Un dia despues de la fecha introducida: " << z << "/" << y << "/" << x;
    }
    else
    {
        cout << "\n   ERROR: La fecha introducida no es valida." ;
    }
}
int f28 (int x, int y, int z){
    if ( x >= 2000 && x <= 3000  && y >= 1 && y <= 13 && z >= 1 && z <= 28)
    {
        z++;
        if ( z == 29 )
        {z = 0;
            y++;
            if ( y == 12 )
            {
                y = 1;
                x++;
                if ( x == 2999 )
                    x = 3000;
            }
        }
        cout << "\n   Un dia despues de la fecha introducida: " << z << "/" << y << "/" << x;
    }
     
    else
    {
        cout << "\n   ERROR: La fecha introducida no es valida." ;
    }
}