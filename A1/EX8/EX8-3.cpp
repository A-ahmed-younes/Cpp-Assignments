#include<iostream>
#include <conio.h>
using namespace std;

void echange (int &a, int &b)
{
    int tampon; tampon  = b; b = a   ;a = tampon;

    cout << "Pendant l'echange : a = "<< a << "  b = " << b <<"\n";
}

int main()
{
    int u = 5, v = 3;
    cout << "avant echange   : u = "<< u << "  v = " << v <<"\n\n";
    echange (u, v);
    cout << "apres echange   : u = "<< u << "  v = " << v <<"\n\n";
    getch();
}
