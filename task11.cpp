#include<iostream>
using namespace std;
int playingvollyball(string year,int holidays,int weekend);
main()
{
    string year;
    int holidays;
    int weekends;
    int result;
    cout<<"Enter year (leap or nomal) :";
    cin>>year;
    cout<<"Enter holidays :";
    cin>>holidays;
    cout<<"Enter weekend :";
    cin>>weekends;
    result=playingvollyball(year,holidays,weekends);
    cout<<result;
}
int playingvollyball(string year,int holidays,int weekend)
{
  int inweekend;
  inweekend=3*48/4;
  int inholidays=2*holidays/3;
  int total=inweekend+inholidays;
if(year=="leap")
{
 int percent=total+(total*0.15);
 return percent;
}
if(year=="normal")
{
 return total;
}
return 0;
}
