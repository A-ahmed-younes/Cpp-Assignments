#include <iostream>

#include <conio.h>

#include <cmath>

using namespace std;

class Complexe {
  private:
    double real;
  double imag;

  public:

    Complexe();

  Complexe(double, double);
  void set(double, double);

  Complexe(double);

  double modulus();

  void print();
};

Complexe::Complexe() {
  real = 0;
  imag = 0;
}
Complexe::Complexe(double real, double imag) {
  this -> real = real;
  this -> imag = imag;
}
void Complexe::set(double real, double imag) {
  this -> real = real;
  this -> imag = imag;
}
Complexe::Complexe(double real) {
  this -> real = real;
  this -> imag = 0;
}
double Complexe::modulus() {
  return sqrt(real * real + imag * imag);
}
void Complexe::print() {
  cout << real << " + " << imag << "i" << endl;
}

int main() {
  Complexe c1(4, 7);
  Complexe c2(5);
  cout << c1.modulus() << endl;
  c2.print();
  getch();
}
