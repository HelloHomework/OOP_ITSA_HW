#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  while (cin >> a) {
    cout << (a*1000/238 + ((a*1000/238%238==0)?0:1)) << endl;
  }
}