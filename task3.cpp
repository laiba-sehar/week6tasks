#include<iostream>
using namespace std;
float discount(int amount,string month,string day);
main()

{
int amount;
string month,day;
float result;
cout<<"Enter month :";
cin>>month;
cout<<"Enter day :";
cin>>day;
cout<<"Enter amount :";
cin>>amount;
result=discount(amount,month,day);
cout<<"Result ="<<result;
}
float discount(int amount,string month,string day)
{
 int  Afterdiscount; 
 float payableamount;
if(day=="sunday"&&(month=="october"||month=="august"||month=="march"))
{
Afterdiscount=amount-amount*0.1;
}
else if(day=="monday"&&(month=="november"||month=="december"))
{
Afterdiscount=amount-amount*0.05;
}
else
{
    payableamount=amount;
}
return Afterdiscount;
}
