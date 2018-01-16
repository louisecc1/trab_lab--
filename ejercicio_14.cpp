#include <bits/stdc++.h>

using namespace std;
float divi(int a,int b){
float a_1=a;
    for(int i=0;i<b;++i){
        a_1=a_1/10;
    }
    return  a_1;
}
float convert(string n){
    int b=0,c=-1;

    for(int i=0;i<n.size();++i){
        if(n[i]=='.'){
            c=i;
            continue;
        }
        b*=10;
        b+=n[i] - '0';
    }
    if(c!=-1){
    return divi(b,n.size()-c-1);
    }
    return b;
}
int main() {
  string a;
  cin>>a;
  cout<<convert(a);
  return 0;
}
