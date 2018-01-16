#include <iostream>

using namespace std;
int invertir(int *a,int len,int i=0){
    int c;
    if(i==len/2){
        return 1;
    }
    c=a[i];
    a[i]=a[len-1-i];
    a[len-1-i]=c;
    return invertir(a,len,++i);
}

int main() {
  int a[10];
  int b(10);
  for(int i=0;i<b;++i){
    cin>>a[i];
  }
  invertir(a,b);
  for(int i=0;i<b;++i){
    cout<<a[i];
  }
  return 0;
}
