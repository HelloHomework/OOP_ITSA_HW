#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double a,b,c;
  while(cin>>a){
    cin >> b;
    cout << setiosflags(ios::fixed) << setprecision(1)<< (a*b)/2 <<endl;
  }
}