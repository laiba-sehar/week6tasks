#include<iostream>
using namespace std;
float func(int budget,string tickettype,int Noofpeople);
main()
{
  
int budget, noPeople;
string type="VIP";
cout<<"Enter budget :";
cin>>budget;
cout<<"Enter noPeople :";
cin>>noPeople;
cout<<"Enter string type :";
cin>>type;
float answer = func(budget,type,noPeople);
if(answer>0)
{
  cout<<"You can afford"<<answer*noPeople;

}
else{
  cout<<"You cannot afford"<<-(answer*noPeople);
}

}
float func(int budget,string tickettype,int Noofpeople)
{
    float var1,result1;
    budget=budget/Noofpeople;

   if(tickettype=="Normal")
   { 
      if(Noofpeople>=1&&Noofpeople<=4) 
      {
      var1 = budget-(budget*0.75);
      result1=var1-249.99;
      }
      if(Noofpeople>=5&&Noofpeople<=9)
      {
      var1= budget-(budget*0.6);
      result1=var1-249.99; 
      }
      if(Noofpeople>=10&&Noofpeople<=24)
      {
      var1= budget-(budget*0.5);
      result1=var1-249.99; 
      }
      if(Noofpeople>=25&&Noofpeople<=49)
      {
      var1= budget-(budget*0.4);
      result1=var1-249.99; 
      }
      if(Noofpeople>=50)
      {
      var1= budget-(budget*0.25);
      result1=var1-249.99; 
      }
   }
  else if(tickettype=="VIP")
{
    if(Noofpeople>=1&&Noofpeople<=4) 
  {
   var1 = budget-(budget*0.75);
   result1=var1-499.99;
  }
  if(Noofpeople>=5&&Noofpeople<=9) 
  {
   var1 = budget-(budget*0.6);
   result1=var1-499.99;
  }
  if(Noofpeople>=10&&Noofpeople<=24) 
  {
   var1 = budget-(budget*0.5);
   result1=var1-499.99;
  }
  if(Noofpeople>=25&&Noofpeople<=49) 
  {
   var1 = budget-(budget*0.4);
   result1=var1-499.99;
  }
  if(Noofpeople>=50) 
  {
   var1 = budget-(budget*0.25);
   float output=var1*Noofpeople;
   result1=output-var1;
  }
}
return result1;
 
}