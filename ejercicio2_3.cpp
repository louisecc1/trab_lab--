#include <iostream>

using namespace std;
int primo( long long a){
    if(a==2){
        return a;
    }

    for(int i=2;i<a;++i){
        if(a%i==0){
            return 0;
        }
        if(i*i>a){
            return a;
        }
    }
}
void n_primos(int a){
    for(int i=1;i<a;++i){
        if(primo(i)!=0){
        cout<<i<<endl;
       }
    }
    return ;
}

int main()
{
    long  long a;
    cin>>a;
    (primo(a)==0)?cout<<"false"<<endl:cout<<"true"<<endl;
    int b;
    cout<<"primo menores que:_"<<endl;
    cin>>b;
    n_primos(b);

    return 0;
}
