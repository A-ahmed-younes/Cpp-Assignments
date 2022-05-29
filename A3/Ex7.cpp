#include<iostream>

using namespace std;
class vecteur {
  float x, y;
  public:
    vecteur(float, float);
  void homotethie(float);
  float det(vecteur & );
  void affiche();
};
vecteur::vecteur(float abs = 0., float ord = 0.) {
  x = abs;
  y = ord;
}
void vecteur::homotethie(float val) {
  x = x * val;
  y = y * val;
}
void vecteur::affiche() {
  cout << "x = " << x << " y = " << y << "\n";
}
float vecteur::det(vecteur & v) {
  return x * v.y - y * v.x;
}

main() {
  vecteur v(3, 4), w(1, 1), h;
  cout << "v: ";
  v.affiche();
  cout << "w: ";
  w.affiche();
  cout << "det(v,w)=" << v.det(w) << endl;
  w.homotethie(2);
  cout << "w: ";
  w.affiche();
  cout << "det(v,w)=" << v.det(w);
}
