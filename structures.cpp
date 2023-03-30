#include<iostream>
using namespace std;
struct num
{
int id;
int pages;
int price;	
};
int main()
{
   int a=168; 
num a[3];
	int max;
	int m=0;
	for(int i=0;i<3;i++)
	{
		cout<<"enter the id="<<endl;
		cin>>a[i].id; 
		cout<<"enter the pages="<<endl;
		cin>>a[i].pages;
		cout<<"enter the price="<<endl;
		cin>>a[i].price;
	}
	max=a[0].price;
	for(int i=1;i<3;i++)
	if(max<a[i].price)
	{
		max=a[i].price;
		m=i;
	}
cout<<a[m].id<<endl;
cout<<a[m].pages<<endl;
cout<<a[m].price<<endl;
	return 0;
}
