#include<iostream>

using namespace std;
class point {
  int x, y;
  public:
    point();
  point(int);
  point(int, int);
  void affiche();
  void affiche(string);
};
point::point() {
  x = 0;
  y = 0;
}
point::point(int abs) {
  x = abs;
  y = abs;
}
point::point(int abs, int ord) {
  x = abs;
  y = ord;
}
void point::affiche() {

  cout << "(" << x << " , " << y << ")";
}
void point::affiche(string message) {
  cout << message;
  affiche();
}
main() {
  point a;
  a.affiche();
  point b(5);
  b.affiche("Point b:\n");
  point c(3, 12);
  c.affiche("Point c:\n");
}
