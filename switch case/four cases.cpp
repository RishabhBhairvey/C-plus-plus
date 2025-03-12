#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter values \n";
cin>>a;
//cout<<"select 1 even/odd,leap or not,square,cube ";
//cin>>c;

switch(a)
{

case 1:
{
if(a%2==0){
        cout<<"even";
}
else{
    cout<<"odd";
}
break;
}

case 2:
    {
        if(a%4==0 && a%100!=0)|| (a%400==0){
            cout<<"is leap year";
        }
        else{
            cout<<"is not a leap year";
        }
    break;
    }

//case 3:
   // cout<<"is the square of value :" <<a= a*a;














}




}








