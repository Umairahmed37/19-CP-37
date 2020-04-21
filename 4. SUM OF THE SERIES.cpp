#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	double denom = 0;
	
	cout<<endl;
	cout<<"--------------------THIS PRINTS THE SUM OF SERIES--------------------\n";
	cout<<"\nSUM OF THE SERIES\n";
	for(double i=1; i<=45; i++){
		denom=denom+(1/i);
	}
	cout<<"THE SUM IS  = "; cout<<denom;


   getch();
   return 0;
}
