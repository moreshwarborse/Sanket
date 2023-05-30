#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter character:";
  cin>>ch;
  cout<<"Ascii value of "<<ch<<"is "<<int(ch);
  int i;
  float f;
  double d;
  long double ld;
  cout<<"Size of int"<<sizeof(i);

  cout<<"Size of float"<<sizeof(f);
  cout<<"Size of char"<<sizeof(ch);
  cout<<"Size of double"<<sizeof(d);
  cout<<"Size of long double"<<sizeof(ld);
  }
