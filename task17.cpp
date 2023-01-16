#include<iostream>
using namespace std;
float studio(string month,float NoOfStays);
float apartment(string month,float NoOfStays);
main()
{
  string month;
  float NoOfStays;
  float result1,result2;
  cout<<"Enter month";
  cin>>month;
  cout<<"Enter number of stays :";
  cin>>NoOfStays;  
  result1=studio(month,NoOfStays);
  cout<<"Studio :"<<result1;
  result2=apartment(month,NoOfStays);
  cout<<"Apartment :"<<result2;
}
float studio(string month,float NoOfStays)
{
    float afterdiscount,beforediscount;
    if((month=="may"||month=="october"))
    {
    if(NoOfStays<=7)
    {
       beforediscount=50 ;
       return beforediscount;
    }    
   if(NoOfStays>7) 
   {
   afterdiscount= 50-(50*0.05);
   return afterdiscount;
   }
   }

   else if(month=="june"||month=="september")
   {
    if(NoOfStays<=14)
    {
       beforediscount= 75.20;
       return beforediscount;
    }
    if(NoOfStays>14)
   {
    afterdiscount=75.20-(75.20*0.3); 
     return afterdiscount;
   }
   }
   else if(month=="july"||month=="august")
   {
    if(NoOfStays<=14)
    {
       beforediscount=76;
       return beforediscount; 
    }
    if(NoOfStays>14)
    {
        afterdiscount=76-(76*0.2);
        return afterdiscount;
   }
  
 }
  return 0.0;
   
}

float apartment(string month,float NoOfStays)
{
   float afterdiscount,beforediscount;
   if(NoOfStays<=14)
   {
    if(month=="may"||month=="october")
    {
     beforediscount=65;
     return beforediscount;   
    }
    if(month=="june"||month=="september")
    {
    beforediscount=68.70;
    return beforediscount;
    }
    if(month=="july"||month=="august")
    {
      beforediscount=77;
      return beforediscount;  
    } 
    
    }
   else if(NoOfStays>14)
   {
    if (month=="may"||month=="october")
   {
    afterdiscount= 65-(65*0.1);
    return afterdiscount;
   }
   if(month=="june"||month=="september")
   {
   afterdiscount=68.70-(68.70*0.1);
   return afterdiscount; 
   }
   if(month=="july"||month=="august")
   {
    afterdiscount=77-(77*0.1);
    return afterdiscount;
   }
    
   }
 return 0.0;
}