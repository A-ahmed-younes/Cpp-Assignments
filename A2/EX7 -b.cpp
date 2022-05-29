#include <iostream>

#include <conio.h>

#include <stdlib.h>


using namespace std;
class Hasard {
  private:
    int nval;
  int * val;

  public:
    Hasard(int, int);
  ~Hasard();
  void affiche();
};
Hasard::Hasard(int nb, int max) {
  int i;
  val = new int[nval = nb];
  for (i = 0; i < nb; i++)
    val[i] = (double)(rand()) / RAND_MAX * max;
}
Hasard::~Hasard() {
  delete[] val;
}
void Hasard::affiche() {
  int i;
  for (i = 0; i < nval; i++)
    cout << val[i] << " ";
  cout << "\n";
}

int main() {
  Hasard suitel(15, 5);
  suitel.affiche();
  cin.get();
  Hasard suite2(6, 12);
  suite2.affiche();
  getch();
}
