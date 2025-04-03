#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int p[a];
    for(int i=0;i<a;i++){
    cin>>p[i];

    }
    int target;
    cin>>target;
    int t=0;
    for(int i=0;i<a;i++){
        if(p[i]==target){
            t=1;
        }
    }
    if(t==0){cout<<"no";}
    else{cout<<"no";}
}





