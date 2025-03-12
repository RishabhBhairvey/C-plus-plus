#include <iostream>
using namespace std;
int main(){
int a;
char c;
cout<<"enter any charecter \n";
cin>>c;
cout<<"select 1 to dispaly vowel or consonant,2 for gender";
cin>>a;
switch(a){
delault:
{
cout<<"invalid choice";
break;
}

case 1:
{
if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
cout<<"vowel";
}
else{

cout<<"consonant";
}
break;
}
case 2:
{
if(c=='f' || c=='F'){
cout<<"femail";
}
else if(c=='m' || c=='M' ){
cout<<"male";
}
else{
cout<<"other";
}

break;


}
}
}
