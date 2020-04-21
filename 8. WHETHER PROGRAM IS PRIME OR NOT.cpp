#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	int even=0;
	int cube=1;
	int squares;

	cout<<"FIRST 10 EVEN NUMBERS SQUARES"<<endl<<endl;
	
	for(int i=1; i<=10; i++){
		even=even+2;
		cout<<even*even<<endl;
	}
	cout<<endl;
	cout<<"FIRST 10 ODD NUMBERS CUBES"<<endl;
	cout<<endl;
	for(int i=1; i<=10; i++){
		cube=cube+2;
		cout<<cube*cube*cube<<endl;
	}
	
	
   getch();
   return 0;
}
