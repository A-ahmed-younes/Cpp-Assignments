#include<iostream>
#include <conio.h>
using namespace std;

float puissance( float x, int n)
{
    float e = 1;
    int i;

    for (i=0; i<n; i++)
    e = e*x;

    return e;
}


void affiche (float x, int n = 0)
{
    if (x == 0)
    cout << "0^0 = 1 \n" ;
    else
    cout << x << " ^ " << n << " = " << puissance(x,n)<<"\n";
}

void affiche (int n,float x=0)
{
    if (x == 0)
    cout << "0^0 = 1\n" ;
    else
    cout << x << " ^ " << n << " = " << puissance(x,n)<<"\n";
}

int main ()
{
    int n = 2;
    float x = 4.1;

   
    affiche (x, n);
    affiche (n, x);


    getch();
}
