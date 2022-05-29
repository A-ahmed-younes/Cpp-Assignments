#include <iostream>

#include <conio.h>

using namespace std;

class Point {
  private:
    int x, y, couleur;

  public:
    Point(int, int);
  void deplacer(int, int);
  void afficher();
  ~Point();
};

Point::Point(int x, int y) {
  this -> x = x;
  this -> y = y;
}
void Point::deplacer(int x, int y) {
  this -> x += x;
  this -> y += y;
}
void Point::afficher() {
  cout << "x: " << this -> x << " y: " << this -> y << " couleur: " << this -> couleur << endl;
}
Point::~Point() {
  this -> x = 0;
  this -> y = 0;
  this -> couleur = 0x000000;
  this -> afficher();
}

int main() {
  Point p(7, 7);
  getch();
}
