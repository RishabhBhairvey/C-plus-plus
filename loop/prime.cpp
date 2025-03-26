//find prime no. b/n 1-20;
#include<iostream>
using namespace std;
int main(){
int a=3,b=0,f=0;
b=a-1;
while(b>1){
if(a%b==0){
f=1;
break;
}
b--;
}
if(f==0){
cout<<a<<"\t";
}
f=0;
a++;









}
