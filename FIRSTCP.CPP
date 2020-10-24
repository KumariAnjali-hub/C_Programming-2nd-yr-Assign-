#include<iostream.h>
#include<conio.h>
class Student{
public:
int roll;
char name;
};
int main(){
clrscr();
cout<<"enter student name and roll no";
Student s1;
cin>>s1.name>>s1.roll;
cout<<s1.name<<"    "<<s1.roll;
//cout<<"name"<<"  "<<"roll_no"<<"\n";
//cout<<s1.name<<"   "<<s1.roll;
getch();
return 0;
}