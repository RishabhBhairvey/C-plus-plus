#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter a number";
cin>>a;

for(int i=2;i<=a;i++)

if(a%i==0){
    cout<<"no. is prime";
    break;
}

else{
    cout<<"is not a prime";
    break;
}
}
