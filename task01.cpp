#include<iostream>
using namespace std;
bool issimilar(string word1,string word2);
main()
{
    string word1, word2;
    bool result;
    cout<<"Enter 1st word :";
    cin>>word1;
    cout<<"Enter 2nd word :";
    cin>>word2;
    result=issimilar(word1,word2);
    cout<<result;
}
bool issimilar(string word1,string word2)
{
if (word1==word2)
{
  return true; 
}
else if(word1!=word2)
{
   return false; 
}

return 0;
}