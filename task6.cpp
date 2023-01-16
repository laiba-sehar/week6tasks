#include<iostream>
using namespace std;
float income(string screening,float Noofrows,float Noofcolumn);
main()
{
    string screening;
    int Noofrows,Noofcolumn;
    float result;
    cout<<"Enter screening :";
    cin>>screening;
    cout<<"Enter No of rows :";
    cin>>Noofrows;
    cout<<"Enter No of column :";
    cin>>Noofcolumn;
  result=income(screening,Noofrows,Noofcolumn);
  cout<<"Output ="<<result;
}
float income(string screening,float Noofrows,float Noofcolumn)
{
float result1;



if(screening=="premiere")
{

result1=Noofrows*Noofcolumn*12.00;;
}

else if(screening=="normal")
{

 result1=Noofrows*Noofcolumn*7.50;
}
else if(screening=="discount")
{

 result1=Noofrows*Noofcolumn*5;
}

return result1;
}