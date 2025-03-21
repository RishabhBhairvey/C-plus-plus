#include<iostream>
using namespace std;
int main(){

    int a,c=1;
    cout<<"Enter pwd = ";


    while(c<=3){
        cin>>a;
        if(a==1234){
            cout<<"Welcome";
            break;

        }else{
              cout<<"Try Again = ";
              cin>>a;
        }
        c++;
        }
    if(c==3){
            cout<<"Not Welcome";

    }

    }



