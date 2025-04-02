# include <iostream>
using namespace std;
int main(){

int arr[6];
int s=sizeof(arr)/sizeof(arr[0]);
arr[5]=16;
arr[4]=21;
arr[3]=32;
arr[2]=53;
arr[1]=64;
arr[0]=23;
for(int i=0;i<s;i++){
cout<<arr[i]<<"\t";
}


}
