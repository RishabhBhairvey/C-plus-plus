# include <iostream>
using namespace std;
int main(){

/*find length of array;
foremula:- s=size of (array)/size of (array[]);


how to find size of array*/

int arr[5]={1,3,4,5,2};//it is not compulsary to use exect 5 variables in an array;
int s=sizeof(arr)/sizeof(arr[0]);
cout<<"length of array"<<s<<"\n";
for(int i=0;i<s;i++){
    cout<<arr[i]<<"\t";
}


}
