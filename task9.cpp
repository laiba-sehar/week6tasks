#include<iostream>
using namespace std;
bool isequal(int num1,int num2,int num3);
main()
{
    int num1,num2,num3;
    bool result;
    cout<<"Enter 1st number :";
    cin>>num1;
    cout<<"Enter 2nd number :";
    cin>>num2;
    cout<<"Enter 3rd number :";
    cin>>num3;
    result=isequal(num1,num2,num3);
    cout<<result;

}
bool isequal(int num1,int num2,int num3)
{
 
   if((num1==num2)&&(num1==num3)&&(num2==num3))
  { 
    return true;
  } 
if((num1==num2)&&(num1!=num3)&&(num2==num3))
   {
    return false;
   }
   return 0;
}