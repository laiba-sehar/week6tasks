#include<iostream>
using namespace std;
//jb pta ho k calculation point may chli jani hay tw variables float type k bnaya kryn            
float Total(float marks1,float marks2,float marks3,float marks4,float marks5);
float percent(float sum);

string grade(float percentage);
main()

{
    string name;
    float marks1,marks2,marks3,marks4,marks5;
    float result1,result2;
    float percentage,sum;
    cout<<"Enter name :";
    cin>>name;
    cout<<"Enter 1st subject marks :";
    cin>>marks1;
    cout<<"Enter 2nd subject marks :";
    cin>>marks2;
    cout<<"Enter 3rd subject marks :";
    cin>>marks3;
    cout<<"Enter 4th subject marks :";
    cin>>marks4;
    cout<<"Enter 5th subject marks :";
    cin>>marks5;
    result1=Total(marks1,marks2,marks3,marks4,marks5);
    cout<<result1<<endl;
    result2=percent(result1);
    cout<<result2<<endl;
    string result3=grade(result2);
    cout<<result3<<endl;
    cout<<name;
}
//ab is total k function may andr float sum varibale ab retun kr rahi ho 
//lkn function ki retun type string hay jis type ka return krana hoo usi tyoe ki return type ho function ki 
float Total(float marks1,float marks2,float marks3,float marks4,float marks5 )
{
float sum=marks1+marks2+marks3+marks4+marks5;

return sum;
}
float percent(float sum)
{
 float percentage;
 percentage=sum*100/500;
 return percentage;   
}
string grade(float percentage)
{

if(percentage>=90&&percentage<=100)
{
    return "A+";
}
if(percentage>=80&&percentage<90)
{
    return "A";
}
if(percentage>=70&&percentage<80)
{
    return "B+";
}
if(percentage>=60&&percentage<70)
{
    return "B";
}
if(percentage>=50&&percentage<60)
{
    return "C";
}
if(percentage>=40&&percentage<50)
{
    return "D";
}
if(percentage<40)
{
    return "F";
}
return " ";
}