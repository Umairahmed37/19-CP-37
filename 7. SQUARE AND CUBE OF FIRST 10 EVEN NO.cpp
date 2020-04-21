#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number;
	int prime;
	int count=0;
	
	cout<<endl;
	cout<<"--------------THIS PRINTS IF THE NUMBER IS EVEN OR NOT-------------\n";
	cout<<"\nENTER THE NUMBER = ";
	cin>>number;
	for(int i=2; i<=(number/2); i++){
		
		if(number%i==0){
			count++;
		}
	}
	if(count==0){
	cout<<"THE NUMBER IS A PRIME NUMBER";
	}
    else
    cout<<"THE NUMBER IS NOT A PRIME NUMBER";


   getch();
   return 0;
}
