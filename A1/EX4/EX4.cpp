#include <iostream>
#include <conio.h>
float puissance (float x , int n)
{
	float R = 1;
	for (int i = 1;i<=n;i++)
	R = R * x;
	return R;
}
using namespace std;

int main () {
	
	char c=3;
	int i=7 , j=8;
	float r=2.821,r1,r2,r3,r4,r5;
	r1 = puissance (r,j);
	r2 = puissance (r,c);
	r3 = puissance (j,i);
	r4 = puissance (j,r);
	r5 = puissance (0,4);
	
	cout << "r1 =" <<r1<<"\n";
	cout << "r2 =" <<r2<<"\n";
	cout << "r3 =" <<r3<<"\n";
	cout << "r4 =" <<r4<<"\n";
	cout << "r5 =" <<r5<<"\n";
	
	getch();
}
