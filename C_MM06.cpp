#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double a;
  int b, c;
  while (cin >> a) {
    b = a*100*1.6+5;
    cout << b/100<<'.'<< b%100/10 << endl;
  }
}