#include <iostream>

using namespace std;
void swap_1(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}

int main() {
  int a,b;
  cin>>a;
  cin>>b;
  cout<<a<<" "<<b<<endl;
  swap_1(a,b);
  cout<<a<<" "<<b<<endl;
  return 0;
}
