#include<iostream>
using namespace std;
string checkspeed(float speed);
main()
{
float speed;
string result;
cout<<"Enter speed";
cin>>speed;
result=checkspeed(speed);
cout<<"Result ="<<result;
}
string checkspeed(float speed)
{
 
 if(speed<=10)
 {
 return "slow";
 }
 else if(speed>10&&speed<=50)
 {
 return "average";
 }
 else if(speed>50&&speed<=150)
 {
    return "fast";
 }
 else if(speed>150&&speed<=1000)
 {
    return "ultra-Fast";
 }
 else{
    return "highest speed";
 }
}