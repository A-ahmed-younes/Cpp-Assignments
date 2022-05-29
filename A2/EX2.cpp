#include <iostream>

#include <conio.h>

using namespace std;
class Point {
  private:
    int x, y, couleur;

  public:
    void initialiser(int, int, int);
  void deplacer(int, int);
  void afficher();
  void effacer();
};

void Point::initialiser(int x, int y, int couleur) {
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

void scene() {
  Point u;
  u.initialiser(2, 7, 0xFF0000);
  u.afficher();
  u.deplacer(1, 5);
  u.afficher();
}

int main() {
  scene();
  getch();
}
