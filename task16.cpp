#include <iostream>
using namespace std;
float func(char type, float NoOfmin, char time);
main()
{
    char type;
    int NoOfmin;
    char time;
    float result;
    cout << "Enter which type of customer you are(Residental or premium select r/p :";
    cin >> type;
    cout << "Press D for day or N' for night call: ";
    cin>>time;
    cout << "Enter no of minutes you need the service :";
    cin >> NoOfmin;
    result=func(type,NoOfmin,time);
    cout<<result<<"$";
}
float func(char type, float NoOfmin, char time)
{
    float price;
    if (type == 'r')
    {
    if(NoOfmin <= 50)   
    {
        price = 10;
        return price;
    }
    if (NoOfmin > 50)
    {
        price = (10*NoOfmin)+ 0.20;
        return price;
    }
    }
    else if (type == 'p' ) 
    {
    if (NoOfmin <= 75 && (time == 'D'||time=='N'))  
    {    price = 25.00;
        return price;
    }
    if (NoOfmin > 75 && time == 'D')
    {
        price = (0.10 *NoOfmin)+ 25.00;
        return price;
    }
   if (NoOfmin > 100 && time == 'N')
    {
        price = (0.05*NoOfmin) + 25.00;
        return price;
    }
}
    else
    {
        cout << "Error";
    }

    return 0.0;
}
