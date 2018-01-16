#include <iostream>
using namespace std;
int burbuja(int arr[4],int len){
  bool t=true;
  int a;
  while (t!=true){
    t=false;
    for(int i=0;i<len-1;++i){
      if(arr[i]>arr[i+1]){
            a=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=a;
            t=true;
      }
    }
    len--;
  }
  return 0;
}
int main() {
  int arr[4]={2,3,7,1};
  burbuja(arr,4);
  for(int i=0;i<4;++i){
    cout<<arr[i];
  }
  return 0;
}
