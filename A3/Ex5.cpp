#include<iostream>

using namespace std;
class point {
  int x, y;
  public:
    point(int abs = 0, int ord = 2) {
      x = abs;
      y = ord;
    }
  int coincidence(point * );
};
int point::coincidence(point * adpt) {
  if ((adpt -> x == x) && (adpt -> y == y))
    return 1;
  else
    return 0;
}
main() {
  int test1, test2;
  point a, b(1), c(0, 2);
  test1 = a.coincidence( & b);
  cout << "a et b:" << test1;
  test2 = a.coincidence( & c);
  cout << "\na et c:" << test2;
}
