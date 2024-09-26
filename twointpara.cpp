// write fun at the text 2 integer as parameter and return thier 
// some call this fun form main and display the result.

#include<iostream>
using namespace std;

int add(int a,int b){
    cout<<"Enter first integer :";
    cin>>a;
    cout<<"Enter second integer :";
    cin>>b;

    cout<<"Addition of "<<a<<" and "<<b<< "is" ;
    return a+b;
}
int main(){
    int a,b;
    int sum=add(a,b);
    cout<<sum;
}