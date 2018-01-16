#include <iostream>

using namespace std;
int strlen(char *s){
    char *i = s;
    while(*i !='\0')
      i++;
    return i-s;
}
int main() {
  char *t;
  cin>>t;
  cout<<strlen(t);
  return 0;
}
