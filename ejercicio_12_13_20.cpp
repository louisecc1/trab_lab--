#include<iostream>
using namespace std;
int rec(int a, int b,int m, int **ary){
  if (a==b){
    return 0;
  }
  else{
    *(ary+a)=new int[m];
    return rec(++a,b,m,ary);
  }
}
//int liberar(int a=0,int b,int m,int **ary){
//  if (a==b){
//    delete []ary;
 //   return 0;
//  }
//  delete []ary[a];
//  return rec(++a,b,m,ary);
//}
int datos(int **arra,int m, int n,int g=0,int r=0){
    if(r==m){
      return 0;
    }
    cin>>*(arra[r]+g);
    if ((g+1)%n==0){
      ++r;
      return datos(arra,m,n,0,r);
    }
    return datos(arra,m,n,++g,r);
    }

int imprimir(int **arra, int m, int n,int h=0,int r=0){
    if(r==m){
      return 0;
    }
    cout<<*(arra[r]+h);
    if ((h+1)%n==0){
      ++r;
    cout<<"\n";
    return imprimir(arra,m,n,0,r);
    }
  return imprimir(arra,m,n,++h,r);
}
int mayor(int **xd,int **lol,int **c,int n,int m,int i,int j){
  if(i==n){
    return imprimir(c,n,m);
  }
  *(c[i]+j)=*(xd[i]+j);
  if(*(xd[i]+j)<*(lol[i]+j)){
  *(c[i]+j)=*(lol[i]+j);
  }
  if((j+1)%m==0){
    ++i;
    return mayor(xd,lol,c,n,m,i,0);
  }
  return mayor(xd,lol,c,n,m,i,++j);
}
int menor(int **xd,int **lol,int **c,int n,int m,int i,int j){
  if(i==n){
    return imprimir(c,n,m);
  }
  *(c[i]+j)=*(xd[i]+j);
  if(*(xd[i]+j)>*(lol[i]+j)){
  *(c[i]+j)=*(lol[i]+j);
  }
  if((j+1)%m==0){
    ++i;
    return menor(xd,lol,c,n,m,i,0);
  }
  return menor(xd,lol,c,n,m,i,++j);
}
int promedio(int **xd,int **lol,int **c,int n,int m,int i,int j){
  if(i==n){
    return imprimir(c,n,m);
  }
  *(c[i]+j)=(*(xd[i]+j)+*(lol[i]+j))/2;
  if((j+1)%m==0){
    ++i;
    return promedio(xd,lol,c,n,m,i,0);
  }
  return promedio(xd,lol,c,n,m,i,++j);
}
int suma(int **xd,int **lol,int **c,int n,int m,int i,int j){
  if(i==n){
    return imprimir(c,n,m);
  }
  *(c[i]+j)=*(xd[i]+j)+*(lol[i]+j);
  if((j+1)%m==0){
    ++i;
    return suma(xd,lol,c,n,m,i,0);
  }
  return suma(xd,lol,c,n,m,i,++j);
}
int resta(int **xd,int **lol,int **c,int n,int m,int i,int j){
  if(i==n){
    return imprimir(c,n,m);
  }
  *(c[i]+j)=*(xd[i]+j)-*(lol[i]+j);
  if((j+1)%m==0){
    ++i;
    return resta(xd,lol,c,n,m,i,0);
  }
  return resta(xd,lol,c,n,m,i,++j);
}
int multi(int **art,int **sadt,int n,int m, int b,int r,int h,int g,int t,int j){
  g=g+(*(art[r]+h))*(*(sadt[h]+j));
  if(t==n-1){
    return g;
  }
  multi(art,sadt,n,m,b,r,++h,g,++t,j);
}
int multi1(int **arr,int **sadd,int **cedd,int n,int m, int a, int b,int r,int h){
    if(m!=a){
      cout<<"No se puede realizar la operacion";
      return 0;
    }
    if(r==n){
      return 0;
    }
    *(cedd[r]+h)=multi(arr,sadd,n,m,b,r,0,0,0,h);
    if((h+1)%b==0){
      ++r;
      multi1(arr,sadd,cedd,n,m,a,b,r,0);
    }
    return multi1(arr,sadd,cedd,n,m,a,b,r,++h);
}
char eleccion(){
  char c;
  cout<<"eliga la operacion que necesite: "<<"\n";
  cout<<"Suma:          ingrese la letra (s) "<<"\n";
  cout<<"Resta:         ingrese la letra (r) "<<"\n";
  cout<<"Mayor:         ingrese la letra (m) "<<"\n";
  cout<<"Menor:         ingrese la letra (n) "<<"\n";
  cout<<"Promedio:      ingrese la letra (p) "<<"\n";
  cout<<"Multiplicacion:ingrese la letra (l) "<<"\n";
  cin>>c;
  return c;
}
int operacion(char c,int **arr,int **sadd,int **cedd,int n,int m,int a,int b){
    switch(c){
      int(*p_operacion)(int **,int **,int **,int ,int ,int ,int );
    case 's':{
      p_operacion=suma;
      return (*p_operacion)(arr,sadd,cedd,n,m,0,0);
    }
    case 'r':{
      p_operacion=resta;
      return (*p_operacion)(arr,sadd,cedd,n,m,0,0);
    }
    case 'm':{
      p_operacion=mayor;
      return (*p_operacion)(arr,sadd,cedd,n,m,0,0);
    }
    case 'n':{
      p_operacion=menor;
      return (*p_operacion)(arr,sadd,cedd,n,m,0,0);
    }
    case 'p':{
      p_operacion=promedio;
      return (*p_operacion)(arr,sadd,cedd,n,m,0,0);
    }
    case 'l':{
      int(*p_operacion)(int **,int **,int **,int ,int ,int ,int ,int ,int);
      p_operacion=multi1;
      return (*p_operacion)(arr,sadd,cedd,n,m,a,b,0,0);
    }
    }
}
int main(){
  int N,M,A,B;
  char c;
  cout<<"ingrese el tamaño de su matrix1(i*j): "<<"\n";
  cin>>N>>M;
  int **matrix_1 = new int *[N];
  rec(0,N,M,matrix_1);
  cout<<"ingrese los datos de su matrix1(i*j): "<<"\n";
  datos(matrix_1,N,M);
  imprimir(matrix_1,N,M);
  cout<<"ingrese el tamaño de su matrix2(i*j): "<<"\n";
  cin>>A>>B;
  int **matrix_2=new int *[A];
  rec(0,A,B,matrix_2);
  cout<<"ingrese los datos de su matrix2(i*j): "<<"\n";
  datos(matrix_2,A,B);
  imprimir(matrix_2,A,B);
  int **ceda=new int*[N];
  rec(0,N,B,ceda);
  c=eleccion();
  operacion(c,matrix_1,matrix_2,ceda,N,M,A,B);
  if (c=='l'){
    imprimir(ceda,N,B);
  }
//  liberar(0,N,M,matrix_1);
//  liberar(0,A,B,matrix_2);
//  liberar(0,N,B,ceda);
  return 0;
}
