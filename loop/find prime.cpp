#include<iostream>
using namespace std;
int main(){
int a,b=2,f=0;
cout<<"Enter a number \n";
cin>>a;
if(a<=1){
    cout<<"is not a prime no.";
}
while(b<=a/2){
        if(a%b==0){
            f=1;
            break;
        }
        b++;
        }
if(f==1){
    cout<<"is not a prime no.";
}
else{
    cout<<"is a prime no.";
}





}
