#include<iostream>
using namespace std;
int main(){

int r;
cout<<"enter total percentage =";
cin>>r;

if(r<100 && r>80){
cout<<" A gread";
}
else if(r>60 && r<80){
    cout<<" B gread ";
}
else if (r>40 && r<60){
    cout<<" C gread ";
}
else if(r>0 && r<40){
    cout<<" D gread  'FAIL'";
}
else{
    cout<<"invali input";
}
cout<<r;



}
