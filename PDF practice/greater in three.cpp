#include<iostream>
using namespace std;
int main(){

int p,l,r;
cout<<"enter first no.";
cin>> p;
cout<<"enter second no.";
cin>>l;
cout<<"enter third no.";
cin>>r;

if(p>l && p>r){
cout<<p<<" is greater";
}
else if(l>p && l>r){
cout<<l<<" is greater";
}
else{
cout<<r<<" is greater";
}

}
