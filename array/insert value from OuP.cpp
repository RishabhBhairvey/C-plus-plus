# include <iostream>
using namespace std;
int main(){

int arr[10];
int s=sizeof(arr)/sizeof(arr[0]);

cout<<"length of array"<<s<<"\n";
cout<<"length of array= "<<s<<"\n";

for(int i=0;i<s;i++){
cin>>arr[i];
}
cout<<"\n stored data are \n";
for(int j=0;j<s;j++){
cout<<arr[j]<<"\t";
}



}
