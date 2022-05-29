#include <iostream>

#include <stdlib.h>

#include <conio.h>

using namespace std;

class Hasard {
  private:
    int val[10];

  public:
    Hasard(int);
  void affiche();
};
Hasard::Hasard(int max) {
  int i;
  for (i = 0; i < 10; i++)
    val[i] = (double)(rand()) / RAND_MAX * max;
}
void Hasard::affiche() {
  int i;
  for (i = 0; i < 10; i++)
    cout << val[i] << " ";
  cout << "\n";
}

int main() {
  Hasard suite1(5);
  suite1.affiche();
  cin.get();
  getch();
}
