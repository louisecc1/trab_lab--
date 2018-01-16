#include <iostream>

using namespace std;
void test(int &a,int &b){
    a^=b;
    b^=a;
    a^=b;
}

int main() {
  int a,b;
  cin>>a;
  cin>>b;
  cout<<a<<" "<<b<<endl;
  test(a,b);
  cout<<a<<" "<<b<<endl;
  return 0;
}
