#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number;
	int j;
	int bi=0;
	int i=1;
	
	cout<<endl;
	cout<<"--------------------THIS PROGRAM CONVERTS DECIMAL TO BINARY--------------------\n";	
	cout<<"\nENTER THE NUMBER TO BE CONVERTED INTO BINARY= ";
	cin>>number;
	
	for(j=number;j>0;j=j/2)
       {
        bi=bi+(number%2)*i;
        i=i*10;
        number=number/2;
       }
       cout<<"THE BINARY NUMBER WILL BE = "<<bi;

   getch();
   return 0;
}
