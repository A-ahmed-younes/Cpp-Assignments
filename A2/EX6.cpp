#include <iostream>

#include <conio.h>

using namespace std;

class SuiteAr {
  private:
    int nval, * val;

  public:
    SuiteAr(int, int);
  ~SuiteAr();
  void affiche();
};

SuiteAr::SuiteAr(int nb, int m) {
  int i;
  nval = nb;
  val = new int[nb];
  for (i - 0; i < nb; i++)
    val[i] = i * m;
}

SuiteAr::~SuiteAr() {
  delete[] val;
}

void SuiteAr::affiche() {
  int i;
  for (i = 0; i < nval; i++)
    cout << val[i] << " ";
  cout << "\n";
}

int main() {
  SuiteAr suitel(10, 4);
  suitel.affiche();
  cin.get();
  SuiteAr suite2(6, 8);
  suite2.affiche();
  cin.get();
  return 0;
}
