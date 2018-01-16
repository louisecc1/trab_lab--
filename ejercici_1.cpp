#include <iostream>

using namespace std;
int _test1(int a){
    if((!(a%100==0) || a%400==0) && a%4==0){
        return 1;
    }
    return 0;
}
int main() {
  int a;
  cin>>a;
  cout<<_test1(a);
  return 0;
}
