#include <iostream>

using namespace std;
int suma(int *a,int len){
    if(len-1==0){
        return a[len-1];
    }
    return a[len-1]+suma(a,--len);
}

int main() {
  int a[]={1,2,3,4,5,6};

  cout<<suma(a,6);
  return 0;
}
