#include<iostream>
// #include<conio.h>
using namespace std;
int main()
{char x,y,z;
int vote ,vote1=0,vote2=0,vote3=0;
// clrscr();
start:
start1: 
start3:
cout<<"whom do you want to vote"<<"\n"<<"1 RAM"<<"\n"<<"2 BAMBAM"<<"\n"<<"3 RAVAN" ;
cout<<"\n"<<" Enter your vote as 1,2,3 any one "<<" \n" ;
cout<<"\n"<<"if you dont have any voter then type 0;"<<"\n"; 
cin>>vote;
if(vote==1)
{vote1=vote1+1;
goto start;
}
if(vote==2)
{
vote2=vote2+1;
goto start1;
}
if(vote==3)
{vote3=vote3+1;
goto start3;
}
cout<<"total vote of RAM ="<<vote1 <<"\n";
cout<<"total vote of BAMBAM="<<vote2<<"\n";
cout<<"total vote of ravan="<<vote3<< "\n";
// getch();
}