#include<iostream>
using namespace std;
int main(){

    int num,num3;
    cout<<"Enter a three digit number = ";
    cin>>num;
    int num2=0;
    num3=num;

    do{
        int dump=num%10;
        num2+=dump*dump*dump;
        num=num/10;
    }while(num>0);

    if(num2==num3){
        cout<<"Armstrong";
    }else{
        cout<<"Not Armstrong";
    }
}
