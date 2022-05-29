#include <iostream>

#include<conio.h>

using namespace std;
class Point {
  private:
    int x, y, couleur;

  public:
    Point(int, int, int);
  void deplacer(int, int);
  void afficher();
  void effacer();
};

Point::Point(int x, int y, int couleur) {
  this -> x = x;
  this -> y = y;
  this -> couleur = couleur;
}
void Point::deplacer(int x, int y) {
  this -> x += x;
  this -> y += y;
}
void Point::afficher() {
  cout << "x: " << this -> x << " y: " << this -> y << " couleur: " << this -> couleur << endl;
}
void Point::effacer() {
  this -> x = 0;
  this -> y = 0;
  this -> couleur = 0x000000;
}
int main() {
  Point u(4, 6, 0xFF0000);
  u.afficher();
  getch();
}
