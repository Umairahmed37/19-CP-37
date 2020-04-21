#include<iostream>
#include <conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int NUMBER;
	
	cout<<endl;
	cout<<"--------------------THIS PRINTS THE MULTIPLICATION TABLE--------------------\n";
	cout<<"\nENTER THE NUMBER TO PRINT HIS TABLES = ";
	cin>>NUMBER;
	cout<<"MULTIPLICATION TABLE\n";
	for(int i=0; i<=10; i++)
	{
	
	cout<<i; cout<<"*"; cout<<NUMBER; cout<<"=";cout<<i*NUMBER<<endl;
}

   getch();
   return 0;
}
