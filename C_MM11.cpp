#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int a;
  while (cin >> a) {
    cout << "NT10=" << a / 10 << endl
         << "NT5=" << a % 10 / 5 << endl
         << "NT1=" << a % 5 << endl;
  }
}