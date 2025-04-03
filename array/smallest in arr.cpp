#include<iostream>
using namespace std;
int main(){
int arr[5]={6,4,11,14,9};
int s=sizeof(arr)/sizeof(arr[0]);

cout<<"length of an array =";

for(int i=0;i<s;i++){
if(arr[i]<s){
s=arr[i];
}
cout<<arr[i];
}


}
