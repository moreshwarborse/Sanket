#include<iostream>
using namespace std;
int main(){
  int days;
  cout<<"Enter Thr number of days";
  cin>>days;
  int year,remain,week,day;
  year=days/365;
  remain=days%365;
  week=remain/7;
  day=remain%7;
  
cout<<"\nYears: "<<year;
 cout<<"\nWeek: "<<week;
  cout<<"\nDays: "<<day;
  
  
