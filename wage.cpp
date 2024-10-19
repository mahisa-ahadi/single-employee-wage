#include<iostream>
using namespace std;
int main(void)
{
	int hr,wage,baseWage=10;
	cout<<"Enter your total working hours: ";
	cin>>hr;
	if(hr<=40)
	{
		wage=hr*baseWage;
	}
	else
	 if(hr>40 && hr<55)
	 {
	 	wage=40*baseWage+(hr-40)*5;
	 }
	 
	else
	 if(hr>=55)
	 {
	 	wage=55*baseWage+100;
	 }
	 
	 cout<<"Your wage is "<<wage;
	 
	 return 0;
}