#include<iostream>
using namespace std;
int rear=0;
int front=0;
int arr[100];
void enqueue(int element){
    if(rear==100){
        cout<<"Queue is full";
    }
arr[rear]=element;
rear++;
}
void dequeue(){
    if(rear==front){
        cout<<"Queue Underflow";  
    }
    else{
front++;
if(front==rear){
    front=0;
    rear=0;
}
}}
int front_(){
    if(front==rear){
        cout<<"Queue Undeflow";
        return -1;
    }
return arr[front];
}
int back(){
    if(rear==front){
        cout << "Queue Undeflow";
    } 
    return arr[rear-1];
}
bool empty(){
if(rear==front){
    return true;
}
return false;
}
int size(){
return rear-1;
}
void display(){
for(int i=front;i<rear;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    cout<<endl;
    cout<<"front: "<<front_()<<endl;
    cout <<"Back: " <<back()<< endl;
    dequeue();
    cout << "Back: " << back() << endl;
    display();
    cout<<endl;
    cout<<"size: "<<size()<<endl;
    cout<<"empty :"<<empty()<<endl;



}