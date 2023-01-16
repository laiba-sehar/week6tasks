#include<iostream>
using namespace std;
float studio(string month,float NoOfStays);
float apartment(string month,float NoOfStays);
main()
{
  string month;
  float NoOfStays;
  float result1,result2;
  cout<<"Enter month :";
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
    float beforediscount,afterdiscount;
    if(month=="june"||month=="september")
    {
        beforediscount=75.20*NoOfStays;
        return beforediscount;
    }
    else if(month=="july"||month=="august")
    {
       beforediscount=76*NoOfStays;
       return beforediscount; 
    }
   if(month=="may"||month=="october") 
   {
    if(NoOfStays<=7)
    {
        beforediscount=50*NoOfStays;
        return beforediscount;
    }
    if(NoOfStays>7&&NoOfStays<14)
    {
    afterdiscount=NoOfStays*(50-(50*0.05));
      return afterdiscount;   
    }
    if(NoOfStays>14)
    {
      afterdiscount=NoOfStays*(50-(50*0.3));
      return afterdiscount;  
    }
   }
   else if(month=="june"||month=="september")
   {
    if(NoOfStays>14)
    {
      afterdiscount=NoOfStays*(75.20-(75.20*0.2));  
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
     beforediscount=65*NoOfStays;
     return beforediscount;   
    }
    if(month=="june"||month=="september")
    {
    beforediscount=68.70*NoOfStays;
    return beforediscount;
    }
    if(month=="july"||month=="august")
    {
      beforediscount=77*NoOfStays;
      return beforediscount;  
    } 
    
    }
   else if(NoOfStays>14)
   {
    if (month=="may"||month=="october")
   {
    afterdiscount= NoOfStays*(65-(65*0.1));
    return afterdiscount;
   }
   if(month=="june"||month=="september")
   {
   afterdiscount=NoOfStays*(68.70-(68.70*0.1));
   return afterdiscount; 
   }
   if(month=="july"||month=="august")
   {
    afterdiscount=NoOfStays*(77-(77*0.1));
    return afterdiscount;
   }
    
   }
 return 0.0;
}