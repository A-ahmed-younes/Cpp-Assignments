#include <iostream>

#include <conio.h>

using namespace std;

class Point {
  private:
    int x, y, coleur;

  public:
    void initialiser(int, int, int);
  void deplacer(int, int);
  void afficher();
  void effacer();
};

void Point::initialiser(int x, int y, int coleur) {
  this -> x = x;
  this -> y = y;
  this -> coleur = coleur;
}
void Point::deplacer(int x, int y) {
  this -> x += x;
  this -> y += y;
}
void Point::afficher() {
  cout << "x: " << this -> x << " y: " << this -> y << " coleur: " << this -> coleur << endl;
}
void Point::effacer() {
  this -> x = 0;
  this -> y = 0;
  this -> coleur = 0x000000;
}

void scene() {
  Point u;
  u.initialiser(3, 3, 0xFF0000);
  u.afficher();
  u.deplacer(2, 7);
  u.afficher();
}

int main() {
  scene();
  getch();
}
