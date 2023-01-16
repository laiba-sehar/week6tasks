#include<iostream>
using namespace std;
string func1(int hour1,int minute1,int hour2,int minute2);
main()
{
int hour1,minute1,hour2,minute2;
string result;
cout<<"Enter exam starting hour:";
cin>>hour1;
cout<<"Enter exam starting minute:";
cin>>minute1;
cout<<"Enter student hour of arrival:";
cin>>hour2;
cout<<"Enter student minutes of arrival:";
cin>>minute2;
func1(hour1,hour2,minute1,minute2);

}
string func1(int hour1,int minute1,int hour2,int minute2)
{
    int Totalhour,totalminute;
   if(hour1==hour2&&minute1==minute2)
    {
    return "On time";
    }
   if(hour1>hour2&&minute1>minute2)
   return " ";
 
}