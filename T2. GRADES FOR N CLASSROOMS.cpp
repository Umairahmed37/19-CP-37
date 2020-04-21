#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	int no_of_ex;
	int scores_rec= 0;
	int total_scores=0;
	float sum_got=0.00;
	float sum_total=0.00;
	float per;
	
	cout<<endl;
	cout<<"--------------THIS PRINTS THE NO OF EXERCIES AND PERCENTAGE --------------\n"<<endl;
	cout<<"HOW MANY EXERCISES TO INPUT ? ";
	cin>>no_of_ex;
	 
	for(int i=1; i<=no_of_ex; i++){
		cout<<"SCORES RECEIVED FOR EXERCISES ";cout<<i;cout<<" ? ";
		cin>>scores_rec;
		sum_got=sum_got+scores_rec;
		cout<<"TOTAL POINTS POSSIBLE FOR EXERCISES\N ";cout<<i;cout<<" ? ";
		cin>>total_scores;
		sum_total=sum_total+total_scores;
						
	}
	cout<<endl;
	per=(sum_got/sum_total)*100;
	cout<<"YOUR TOTAL IS  ";cout<<sum_got;
	cout<<" OUT OF  "; cout<<sum_total;cout<<" , OR  ";cout<<per;cout<<" PERCENTAGE";
	
	
   getch();
   return 0;
}
