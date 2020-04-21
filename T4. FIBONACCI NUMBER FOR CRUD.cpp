#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	int pop;
	int time;
	int F0;
	int F1;
	int result;
	char done='y';
	cout<<endl;
	cout<<"----------THIS PRINTS THE FIBONACCI NUMBERS OF CRUD----------\n"<<endl;
	
	while(done=='Y' || done=='y'){
	
	cout<<"ENTER THE CURRENT POPULATION (pounds) OF CRUD = ";
	cin>>pop;
	cout<<"ENTER THE TIME IN DAYS = ";
	cin>>time;
	F0=0;
	F1=pop;
	
	for(int i=5; i<=time; i=i+5){
		
		result=F0+F1;
		F0=F1;
		F1=result;	

	}
	cout<<endl;
	cout<<"THE RESULT IS = "<<result<<endl;
	cout<<"IF YOU WANT TO CALCULATE ANOTHER THEN TYPE Y = ";
    cin>>done;
}
cout<<"THANKS FOR USING OUR APPLICATION";
	
	
	
   getch();
   return 0;
}
