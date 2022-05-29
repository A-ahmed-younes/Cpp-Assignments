#include<iostream>

#define pi 3.14
using namespace std;
class Coordonne {
  private:
    int x, y;
  public:
    Coordonne(int a = 0, int b = 0) {
      x = a;
      y = b;
    }
  void deplace(int a, int b) {
    x += a;
    y += b;
  }
  void affiche() {
    cout << "x = " << x << " y = " << y << endl;
  }
};
class forme {
  protected:
    short couleur;
  public:
    forme(short = 1);
  forme(forme & );
  void affiche();
  forme operator = (forme & );
};
class Cercle: public forme {
  protected: Coordonne centre;
  short rayon;
  public: Cercle(int, int, short, short);
  Cercle(Cercle & );
  Cercle operator = (Cercle & );
  void affiche();
  void deplace(int, int);
  float surface();
  float perimetre();
};
class Triangle: public forme {
  protected: Coordonne a,
  b,
  c;
  public: Triangle(int, int, int, int, int, int, short);
  Triangle(Triangle & );
  Triangle operator = (Triangle & );
  void affiche();
  void deplace(int, int);
  float surface();
  float perimetre();
};
class Rectangle: public forme {
  protected: Coordonne a,
  b;
  public: Rectangle(int, int, int, int, short);
  Rectangle(Rectangle & );
  Rectangle operator = (Rectangle & );
  void affiche();
  void deplace(int, int);
  int surface();
  int perimetre();
};
class Carre: public Rectangle {
  short cote;
  public:
    Carre(int, int, short, short);
  Carre(Carre & );
  Carre operator = (Carre & );
  void affiche();
  void deplace(int, int);
  int surface();
  int perimetre();
};
forme::forme(short c) {
  couleur = c;
}
forme::forme(forme & f) {
  couleur = f.couleur;
}
void forme::affiche() {
  cout << "La couleur est:" << couleur << endl;
}
forme forme::operator = (forme & f) {
  forme a;
  a.couleur = f.couleur;
  return a;
}
// cercle
Cercle::Cercle(int x, int y, short r, short c): forme(c) {
  centre = Coordonne(x, y);
  rayon = r;
}
Cercle::Cercle(Cercle & c): forme(c) {
  centre = c.centre;
  rayon = c.rayon;
}
Cercle Cercle::operator = (Cercle & c) {
  Cercle k(c);
  return k;
}
void Cercle::affiche() {
  cout << "=> Cercle:\n";
  cout << "Le centre:";
  centre.affiche();
  cout << "le rayon:" << rayon << endl;
  forme::affiche();
}
void Cercle::deplace(int x, int y) {
  centre.deplace(x, y);
}
float Cercle::perimetre() {
  return 2 * pi * rayon;
}
float Cercle::surface() {
  return pi * rayon * rayon;
}
Triangle::Triangle(int xa, int ya, int xb, int yb, int xc, int yc, short col): forme(col) {
  a = Coordonne(xa, ya);
  b = Coordonne(xb, yb);
  c = Coordonne(xc, yc);

}
Triangle::Triangle(Triangle & t): forme(t) {
  a = t.a;
  b = t.b;
  c = t.c;
}
Triangle Triangle::operator = (Triangle & t) {
  Triangle k(t);
  return k;
}
void Triangle::affiche() {
  cout << "=> Triangle:\n";
  cout << "a:";
  a.affiche();
  cout << "b:";
  b.affiche();
  cout << "c:";
  c.affiche();
  forme::affiche();
}
void Triangle::deplace(int x, int y) {
  a.deplace(x, y);
  b.deplace(x, y);
  c.deplace(x, y);
}

Rectangle::Rectangle(int xa, int ya, int xb, int yb, short col): forme(col) {
  a = Coordonne(xa, ya);
  b = Coordonne(xb, yb);

}
Rectangle::Rectangle(Rectangle & r): forme(r) {
  a = r.a;
  b = r.b;
}
Rectangle Rectangle::operator = (Rectangle & r) {
  Rectangle k(r);
  return k;
}
void Rectangle::affiche() {
  cout << "=> Rectangle:\n";
  cout << "a:";
  a.affiche();
  cout << "b:";
  b.affiche();
  forme::affiche();
}
void Rectangle::deplace(int x, int y) {
  a.deplace(x, y);
  b.deplace(x, y);
}
Carre::Carre(int xa, int ya, short cot, short col): Rectangle(xa, ya, xa + cot, ya + cot, col) {
  cote = cot;
}
Carre::Carre(Carre & cr): Rectangle(cr) {
  cote = cr.cote;
}
Carre Carre::operator = (Carre & cr) {
  Carre k(cr);
  return k;
}
void Carre::affiche() {
  cout << "=> Carre:\n";
  cout << "Coin bas gauche:";
  a.affiche();
  cout << "Mesure: \n" << cote;
  forme::affiche();
}
void Carre::deplace(int x, int y) {
  a.deplace(x, y);
}
main() {
  Cercle cl(15, 8, 4, 14);
  cl.affiche();
  cl.deplace(6, 2);
  cl.affiche();
  Triangle T(12, 24, 15, 16, 30, 30, 13);
  T.affiche();
  T.deplace(3, 6);
  T.affiche();
  Rectangle R(20, 15, 45, 25, 40);
  R.affiche();
  R.deplace(2, 7);
  R.affiche();
  Carre C(5, 6, 8, 12);
  C.affiche();
  C.deplace(6, 8);
  C.affiche();
}
