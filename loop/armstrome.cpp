#include<iostream>
using namespace std;
int main()
{
int a,b=0;

cout<<"Enter a armstrome number";
cin>>a;
int c=a;
do{
        int o=a%10;
b=b+(o*o*o);
a=a/10;1;
}while(a>0);
cout<<b<<"\n";
if(b==c){
    cout<<"is a armstrome no.";
}
else{
    cout<<"not a armstrong";
}







}
