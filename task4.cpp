#include<iostream>
using namespace std;
string checktitle(char gender,int age);
main()
{
    char gender;
    int age;
    string result;
    cout<<"Enter gender :";
    cin>>gender;
    cout<<"Enter age :";
    cin>>age;
    result=checktitle(gender,age);
    cout<<"Result = "<<result;
}
string checktitle(char gender,int age)
{

  if(gender=='m'&&age>=16)
  {
  return "Mr.";
  } 
  else if(gender=='m'&&age<16)
  {
   return "Master"; 
  } 
 else if(gender=='f'&&age>=16)
 {
    return "Ms.";
 }
 else if(gender=='f'&&age<16)
 {
    return "Miss";
 }
 else
 {
    return 0;
 }
}
