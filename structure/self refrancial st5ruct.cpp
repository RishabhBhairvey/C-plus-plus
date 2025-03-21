#include<iostream>
using namespace std;
struct demo{
int roll;
string name;
struct demo *link;

};
int main(){
demo obj1,obj2;
obj1.link=NULL;
obj1.name="rinkesh";

 obj2.link=NULL;
 obj2.name="rishu";

obj1.link=&obj2;
obj2.link=&obj1;

cout<<obj1.link->name<<endl;
cout<<obj2.link->name<<endl;





}
