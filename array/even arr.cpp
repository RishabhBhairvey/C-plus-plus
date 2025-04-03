#include<iostream>
using namespace std;
int main(){
int arr[5];
int s=sizeof(arr)/sizeof(arr[0]);

cout<<"length of arr"<<s<<"\n";
cout<<"enter"<<s<<"value"<<"\t";
for(s=0;s<=5;s++){
if(s%2==0){
        arr[s]=s;
cout<<"even values in arr"<<arr[s];
}

}




}
