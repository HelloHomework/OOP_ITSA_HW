#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

#include <stdio.h>

int main(){
  int a,b;
  while(cin>>a){
    if(a>31)cout<<"Value of more than 31"<<endl;
    else cout<<(1<<a)<<endl;
  }
}