#include <iostream>
using namespace std;
struct student{

int roll;
string name;
char grade;
float perc;

void show(){
cout<<roll<<" "<<name<<" "<<grade<<" "<<perc<<" "<<endl;

}
};
int main(){
student a;
cout<<"enter roll =";
cin>>a.roll;
cout<<"enter name =";
cin>>a.name;
cout<<"enter grade =";
cin>>a.grade;
cout<<"enter perc =";
cin>>a.perc;

a.show();




}










