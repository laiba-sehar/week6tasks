#include<iostream>
using namespace std;
string calculation(string temperature,string humidity);
main()
{
  string temperature,humidity;
  string output;
  cout<<"Enter temperature:";
  cin>>temperature;
  cout<<"Enter humidity:";
  cin>>humidity;
  output = calculation(temperature,humidity);
  cout<<output;
}
string calculation(string temperature,string humidity)
{
  
   if(temperature=="warm"&&humidity=="dry")
  {return "Play tennis";
  }
 if(temperature=="warm"&&humidity=="humid")
 {return "Swim";
 }
 if(temperature=="cold"&&humidity=="dry")
 {return "play basketball";
 }
 if(temperature=="cold"&&humidity=="humid")
 {return"Watch TV";
 }
 return "";
}