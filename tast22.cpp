#include<iostream>
using namespace std;

main ()
{
    int height;
    int x;
    int y;
    cout << "enter height:";
    cin >> height;
    cout << "enter point of x coordinate:";
    cin >> x;
    cout << "enter point of y coordinayte:";
    cin >> y;

    if(( x >=0 && x<= 3*height) && (y==0))
    {
        cout << "border";
    }
    else if(( x >=0 && x<= height) && (y==height))
    {
        cout << "border";
    }
     else if(( x >=2*height && x<= 3*height) && (y==height))
    {
        cout << "border";
    }
     else if( x == height && (y >=height && y<= 4*height))
    {
        cout << "border";
    }
      else if( x == 2*height && (y >=height && y<= 4*height))
    {
        cout << "border";
    }
     else if( x == 0 && (y >=0 && y<= height))
    {
        cout << "border";
    }
     else if( x == 3*height && (y >=0 && y<= height))
    {
        cout << "border";
    }
     else if( x >= height && x <=2*height && y==4*height)
    {
        cout << "border";
    }
     else if(( x < 0 || x > 3*height))
    {
        cout << "outside";
    }
     else if(( x < height) && (y > height))
    {
        cout << "outside";
    }
     else if(( x = 2* height) && (y > height))
    {
        cout << "outside";
    }
     else if(( y < 0 || x > 4*height))
    {
        cout << "outside";
    }
    else 
    {
        cout << "inside";
    }
    
}