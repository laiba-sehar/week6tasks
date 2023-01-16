#include<iostream>
using namespace std;
float lowestPrice(int kilometers,string time);

main()
 {
    int kilometers;
    string time;
    float result;
    cout<<"Enter kilometers :";
    cin>>kilometers;
    cout<<"Enter time :";
    cin>>time;
    result=lowestPrice(kilometers,time);
    cout<<"Cheepest price  ="<<result;

 }
float lowestPrice(int kilometers,string time)

{

float result1;
float startingfee=0.70;


if(kilometers<20&&time=="day")
{
result1=(kilometers*0.79)+startingfee;
}
else if(kilometers<20&&time=="night")
{
result1=(kilometers*0.90)+startingfee;
}
else if(kilometers>=20&&kilometers<=99&&(time=="day"||time=="night"))
{
result1=kilometers*0.09;
}
else if(kilometers>=100&&(time=="day"||time=="night"))
{
result1=kilometers*0.06;
}

    return result1;
}
