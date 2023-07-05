#include<iostream>
using namespace std;
int main(){
    int a ,b;
    int t;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    t=a;
    a=b;
    b=t;
    cout<<"after swapping"<<endl;
    cout<<"value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
    return 0;
}