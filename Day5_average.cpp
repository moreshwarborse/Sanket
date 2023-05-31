#include <iostream>
using namespace std;
int main()
{
    char name[20];
    int roll, phy, chem, math, eng, geo, hin, total;
    double avearage, percent;
    cout << "\nEnter the name of student:";
    cin >> name;
    cout << "\nEnter the Roll no of student:";
    cin >> name;
    
    cout << "\nEnter the marks of Physic:";
    cin >> phy;
    cout << "\nEnter the marks of Chemistry:";
    cin >> chem;
    cout << "\nEnter the marks of Maths:";
    cin >> math;
    cout << "\nEnter the marks of English:";
    cin >> eng;
    cout << "\nEnter the marks of Geography:";
    cin >> geo;
    cout << "\nEnter the marks of Hindi:";
    cin >> hin;
    total = phy + chem + math + eng + geo + hin;
    cout<<"\nDetails:\n";
    cout<<"\nNAME: "<<name;
    cout<<"\nRoll No: "<<roll;
    
    cout << "\nThe Total Marks scored is " << total;
    avearage = total / 5;
    cout << "\nThe Average Marks scored is " << avearage;
    percent = (total / 500) * 100;
    cout << "\nThe Percentage Marks scored is " << avearage;
}