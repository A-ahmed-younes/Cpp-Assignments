#include <iostream>
using namespace std;

class Complex{

private:
 double reel,imag;

public:
 Complex(){
  reel=imag=0;
 }

 Complex(double r){
  reel=r;
  imag=0;
 }

 Complex(double r, double i){
  reel=r;
  imag=i;
 }

 Complex(Complex &obj){
  reel=obj.reel;
  imag=obj.imag;
 }

 Complex add(Complex c){
        Complex Add;
  Add.reel = reel + c.reel;
  Add.imag = imag + c.imag;
        return Add;
 }

 Complex sous(Complex c){
  Complex sous;
  sous.reel = reel - c.reel;
  sous.imag = imag - c.imag;
  return sous;
 }

 Complex mult(Complex c){
        Complex Mult;
  Mult.reel = reel*c.reel - imag*c.imag;
  Mult.imag = reel*c.imag - c.reel*imag;
  return Mult;
 }

 Complex div(Complex c){
  Complex Div;
  Div.reel = (reel*c.reel + imag*c.imag)/(c.reel*c.reel + c.imag*c.imag);
  Div.imag = (imag*c.reel + reel*c.imag)/(c.reel*c.reel + c.imag*c.imag);
  return Div;
 }

 void print(){
        cout<<reel<<"+"<<imag<<"i"<<endl<<endl;
 }

 double getreel() const{
  return reel;
 }

 double getImag() const{
  return imag;
 }

 void setreel(double re){
  reel = re;

 }

 void setImag(double im){
        imag = im;
 }


};


int main()
{
 double reel1,imag1,reel2,imag2;

 cout<<"Entrer la partie reel du premier num: ";
    cin>>reel1;
 cout<<"Entrer la partie imaginaire du premier num: ";
 cin>>imag1;
    Complex obj1(reel1,imag1);
 obj1.print();

 cout<<"Entrer la partie reel du deuxieme num : ";
 cin>>reel2;
 cout<<"Entrer la partie imaginaire du deuxieme num :  ";
    cin>>imag2;
    Complex obj2(reel2,imag2);
 obj2.print();

 Complex c;
 c = obj1.add(obj2);
 cout<<"resultat d'addition est : ("<<c.getreel()<<")+("<<c.getImag()<<")i"<<endl;
 c= obj1.sous(obj2);
 cout<<endl<<"resultat de soustraction est : ("<<c.getreel()<<")+("<<c.getImag()<<")i"<<endl;

 c= obj1.mult(obj2);
 cout<<endl<<"resultat de multiplication is : ("<<c.getreel()<<")+("<<c.getImag()<<")i"<<endl;

 c= obj1.div(obj2);
 cout<<endl<<"resultat de division est : ("<<c.getreel()<<")+("<<c.getImag()<<")i"<<endl;
 return 0;
}
