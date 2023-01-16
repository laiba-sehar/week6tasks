#include<iostream>
using namespace std;
float function1(string city,string product,float quantity);
main()
{
string city,product;
float quantity;
float result1;
cout<<"Enter city :";
cin>>city;
cout<<"product :";
cin>>product;
cout<<"Enter Quantity :";
cin>>quantity;
result1=function1(city,product,quantity);
cout<<"result = "<<result1;
}
float function1(string city,string product,float quantity)
{
    float result;
   if(city=="sophia"&&product=="coffee")
   {
   result=0.50*quantity;
   } 
   else if(city=="sophia"&&product=="water")
   {
    result=0.80*quantity;
   }
   else if(city=="sophia"&&product=="beer")
  {
     result=1.20*quantity;
  }
     else if(city=="sophia"&&product=="sweets")
  {
     result=1.45*quantity;
  }
  else if(city=="sophia"&&product=="peanuts")
  {
    result=1.60*quantity;
  }
   if(city=="plovdiv"&&product=="coffee")
   {
   result=0.40*quantity;
   } 
   else if(city=="plovdiv"&&product=="water")
   {
    result=0.70*quantity;
   }
   else if(city=="plovdiv"&&product=="beer")
  {
     result=1.15*quantity;
  }
     else if(city=="plovdiv"&&product=="sweets")
  {
     result=1.30*quantity;
  }
  else if(city=="plovdiv"&&product=="peanuts")
  {
    result=1.50*quantity;
  }
  
   if(city=="varma"&&product=="coffee")
   {
   result=0.45*quantity;
   } 
   else if(city=="varma"&&product=="water")
   {
    result=0.70*quantity;
   }
   else if(city=="varma"&&product=="beer")
  {
     result=1.10*quantity;
  }
     else if(city=="varma"&&product=="sweets")
  {
     result=1.35*quantity;
  }
  else if(city=="varma"&&product=="peanuts")
  {
    result=1.55*quantity;
  }
 return result;
}
