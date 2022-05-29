#include<iostream>

#include<string>

using namespace std;
class Note {
  private:
    float value;
  public:
    void input();
  void print();
  void set(float);
  float get();
  string apprecier();
};
void Harmonise(Note & );
float Moyenne(Note * , int);
void Appreciation(Note * , int);
void Note::input() {
  do {
    cout << "Entrer une note:";
    cin >> value;
  } while (value < 0 || value > 20);
}
void Note::print() {
  cout << "la note est " << value;
}
void Note::set(float val) {
  if (val >= 0 && val <= 20)
    value = val;
  else
    cout << " \nDonnees pas correct ";
}
float Note::get() {
  return value;
}
string Note::apprecier() {
  if (value <= 6) return "Mediocre";
  if (value > 6 && value < 12) return "insuffisant";
  if (value >= 12 && value < 14) return "passable";
  if (value >= 14 && value < 16) return "Bien";
  if (value >= 16) return "Tres bien";
}
void Harmonise(Note & n) {
  if (n.get() < 8) n.set(0);
  else n.set(8);
}

float Moyenne(Note * n, int nbr) {

  float som = 0;
  for (int i = 0; i < nbr; i++) {
    som += n[i].get();
  }
  return som / nbr;
}
void Appreciation(Note * n, int nbr) {
  for (int i = 0; i < nbr; i++) {
    cout << "\nNote" << i << ":" << n[i].get() << " " << n[i].apprecier();
  }
}
main() {
  int nbr;
  cout << "Entrez le nombre d'eleves:";
  cin >> nbr;
  Note * n;
  n = new Note[nbr];
  for (int i = 0; i < nbr; i++) {
    cout << "Note" << i << ":";
    n[i].input();
  }
  Appreciation(n, nbr);
  cout << "\nla moyenne est:" << Moyenne(n, nbr);
  for (int i = 0; i < nbr; i++) {
    if (n[i].get() < 15) {
      Harmonise(n[i]);
    }
  }
  cout << "\n\n ***Apres l'harmonisation***\n";
  Appreciation(n, nbr);
  cout << "\nla moyenne est:" << Moyenne(n, nbr);
}
