#include<iostream>

using namespace std;
class Compteur {
  static int ctr;
  public:
    Compteur() {
      ctr++;
      cout << "le nombre d'objets est: " << ctr << endl;
    }
};
int Compteur::ctr = 0;
void essai() {
  Compteur u, v;
}
main() {
  Compteur a;
  essai();
  Compteur b;
}
