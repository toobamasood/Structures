#include<iostream>
using namespace std; 
struct result
{
    int marks;
    char grade;
};
struct record
{
    int rno;
    result r;
};
 int main() 
{ 
    int i;
record rec[3];
for(i=0;i<3;i++)
{
cout<<"enter rollno=";
cin>>rec[i].rno;
cout<<"enter marks=";
cin>>rec[i].r.marks;
cout<<"enter grade=";
cin>>rec[i].r.grade;
cout<<endl;
}
cout<<"Record of students"<<endl;
for(i=0;i<3;i++)
{
cout<<"Roll No=\t"<<rec[i].rno<<endl;
cout<<"Marks=\t"<<rec[i].r.marks<<endl;
cout<<"Grade=\t"<<rec[i].r.grade<<endl;
cout<<endl;
}
}