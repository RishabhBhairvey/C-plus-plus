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
        num2=(10*num2)+dump;
        num=num/10;
    }while(num>0);

    cout<<num2;

    if(num2==num3){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
}

// while loop is called entry loop, it will execute the statement till the condition is true otherwise it will be terminated.
