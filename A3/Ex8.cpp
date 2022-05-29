#include<iostream>

using namespace std;
class vecteur {
  float x, y;
  public:
    vecteur(float, float);
  vecteur & homotethie(float);
  void affiche();
};
vecteur::vecteur(float abs = 0., float ord = 0.) {
  x = abs;
  y = ord;
}
vecteur & vecteur::homotethie(float val) {
  static vecteur res;
  res.x = x * val;
  res.y = y * val;
  return res;
}
void vecteur::affiche() {
  cout << "x = " << x << " y = " << y << "\n";
}
main() {
  vecteur w(1, 1), h;
  cout << "w: ";
  w.affiche();
  h = w.homotethie(2);
  cout << "h: ";
  h.affiche();
}
