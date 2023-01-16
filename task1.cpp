#include<iostream>
using namespace std;
int isgreater(int num1,int num2,int num3);
main(){
int num1, num2,num3;
int result;
cout<<"Enter 1st number :";
cin>>num1;
cout<<"Enter 2nd number :";
cin>>num2;
cout<<"Enter 3rd number :";
cin>>num3;
result=isgreater(num1,num2,num3);
cout<<"Greatest number:"<<result;
}
int isgreater(int num1,int num2,int num3)
{
int greater;
 if(num1>num2&&num1>num3)
 {
    greater=num1;

 }
else if(num2>num1&&num2>num3)
{
 greater=num2;
 
}
 else if(num3>num1&&num3>num2)
{
   greater=num3;
 
}
else{
    greater=0;
}
return greater;

}