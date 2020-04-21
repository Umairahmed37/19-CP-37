#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number;
	int factorial=1;
	
	cout<<endl;
	cout<<"--------------------THIS PRINTS THE FACTORIAL OF NUMBER--------------------\n";
	cout<<"\nENTER THE NUMBER = ";
	cin>>number;
	
	for(int i=1; i<=number; i++){
		factorial=factorial*i;
		}
	cout<<"THE FACTORIAL IS = "<<factorial;
	
	
   getch();
   return 0;
}
