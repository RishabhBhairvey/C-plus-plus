#include<iostream>
using namespace std;
int main(){

int a;
cout<<"enter a year = ";
cin>>a;
if(a%4==0 && a%100!=0 ||a%400==0){
    cout<<a<<"this year is leap year"<<endl;
}
else{
    cout<<a<<"this is not a leap year"<<endl;
}











}
