#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	int weight;
	int cost=0;
	char city;
	int expense;
	char again='h';
	
	while(again=='H' || again=='h'){
	
	cout<<endl;
	cout<<"--------------------THIS PRINTS THE COST OF THE PARCEL--------------------\n"<<endl;
	cout<<"ENTER THE WEIGHT = ";
	cin>>weight;
	cout<<"ENTER THE PLACE TO DELIVER, IF WITHIN CITY THEN TYPE \"Y\" ELSE \"N\" = ";
	cin>>city;
	
	
	for(int i=1; i<=weight; i++){
		cost=cost+2;
	}
	
	
	if(city=='Y' || city=='y'){
		expense=cost+20;
	}
	else{
		expense=cost+40;
	}
	cout<<"THE TOTAL EXPENCE WILL BE ";cout<<expense;cout<<" DOLLARS ($)";
	cout<<"again?";
	cin>>again;
}

   getch();
   return 0;
}
