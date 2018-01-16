#include <iostream>

using namespace std;
int test(int a){
return  !(a & (a-1));
}

int main() {
  int a;
  cin>>a;
  cout<<test(a);
  return 0;
}
