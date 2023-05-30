#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter character:";
  cin>>ch;
  cout<<"\nAscii value of "<<ch<<"is "<<int(ch);
  int i;
  float f;
  double d;
  long double ld;
  cout<<"\nSize of int"<<sizeof(i);

  cout<<"\nSize of float"<<sizeof(f);
  cout<<"\nSize of char"<<sizeof(ch);
  cout<<"\nSize of double"<<sizeof(d);
  cout<<"\nSize of long double"<<sizeof(ld);
  }
