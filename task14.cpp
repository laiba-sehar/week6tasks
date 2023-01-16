#include<iostream>
using namespace std;
string Zodiacsign(int date,string month);
main()
{
 string month;
 int date;
 string output;
 cout<<"Enter month :";
 cin>>month;
 cout<<"Enter date :";
 cin>>date;
 output=Zodiacsign(date,month);
 cout<<output;

}
string Zodiacsign(int date,string month)
{
   if((month=="march"&&(date>=21&&date<=31))||(month=="april"&&(date>=1&&date<=19)))
   
   {
    return "Aries ";
   }
    
    else if((month=="april"&&(date>=20&&date<=30))||(month=="may"&&(date>=1&&date<=20)))
    
     {
       return "Taurus"; 
     }   
    
    else if((month=="may"&&(date>=21&&date<=31))||(month=="june"&&(date>=1&&date<=20)))
     {
       return "Gemini"; 
     }   
    
    
    else if((month=="may"&&(date>=21&&date<=31))||(month=="june"&&(date>=1&&date<=20)))
    
     {
       return "The Twins"; 
     }   
    
    else if((month=="june"&&(date>=21&&date<=30))||(month=="july"&&(date>=1&&date<=22)))
     
     {
       return "Cancer"; 
     }   
    
    else if((month=="july"&&(date>=23&&date<=31))||(month=="august"&&(date>=1&&date<=22)))
     
     {
       return "Leo"; 
     }   
    
     else if((month=="august"&&(date>=23&&date<=31))||(month=="september"&&(date>=1&&date<=22)))
     
     {
       return "Virgo"; 
     }   
    
     else if((month=="september"&&(date>=23&&date<=30))||(month=="october"&&(date>=1&&date<=22)))
     
     {
       return "Libra"; 
     }   
    
     else if((month=="october"&&(date>=23&&date<=31))||(month=="november"&&(date>=1&&date<=21)))
     
     {
       return "Scorpio"; 
     }   
    
     else if((month=="november"&&(date>=22&&date<=30))||(month=="december"&&(date>=1&&date<=21)))
     
     {
       return "Sagittarius"; 
     }   
    
     else if((month=="december"&&(date>=22&&date<=31))||(month=="january"&&(date>=1&&date<=19)))
    
     {
       return "Capricorn"; 
     }   
    
     else if((month=="january"&&(date>=20&&date<=31))||(month=="februrary"&&(date>=1&&date<=18)))
     
     {
       return "Aquarius"; 
     }   
    
     else if((month=="february"&&(date>=19&&date<=29))||(month=="march"&&(date>=1&&date<=20)))
     
     {
       return "Pisces"; 
     }   
    
    return " ";
}