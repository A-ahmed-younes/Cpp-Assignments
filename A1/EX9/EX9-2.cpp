#include<iostream>
#include <conio.h>
using namespace std;

struct essai
{
    int n;
    float x;
};

void remise_a_zero(struct essai *ad)
{
    ad->n = 0;
    ad->x = 0.0;
}

int main()
{
	struct essai s;
	remise_a_zero (&s);
	cout <<"valeurs apres remise a zero : " << s.n << " " << s.x << endl;

    getch();

}
