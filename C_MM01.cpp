#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double a,b,c;
  while(cin>>a){
    cin >> b >> c;
    cout<<"Trapezoid area:" << setiosflags(ios::fixed) << setprecision(1)<< (a+b)*c/2 <<endl;
  }
}