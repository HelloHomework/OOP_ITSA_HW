#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double a;
  int b, c;
  while (cin >> a) {
    b = a * 100 * 1.6 + 5;
    cout << setiosflags(ios::fixed) << setprecision(1) << 9.0 / 5 * a + 32
         << endl;
  }
}