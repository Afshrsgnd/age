#include <iostream>
using namespace std;
int main ()

{
	int year,month,day,a,b,c;
	
	b=0;
	
	c=0;
	
	cout<<"year : ";
	
	cin>>year;
	
	a= 1401-year;
	
	cout<<"month : ";	

	cin>>month;
	
	b= 11-month ;
	
	cout<<"day : ";
	
	cin>>day;
	
	c= 17-day;
	
	cout <<a<<" , "<<b<<" , "<<c;
	

return 0;	
	
	
	
}