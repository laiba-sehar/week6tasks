#include <iostream>
using namespace std;
float price(string fruit, string day, float quantity);
main()
{
   string fruit, day;
   float quantity;
   float output;
   cout << "Enter fruit name :";
   cin >> fruit;
   cout << "Enter day :";
   cin >> day;
   cout << "Enter Quantity :";
   cin >> quantity;
   output = price(fruit, day, quantity);
   cout << output;
}
float price(string fruit, string day, float quantity)
{
   if ((fruit == "banana" || fruit == "grapes" || fruit == "apple" || fruit == "grapefruit" || fruit == "orange" || fruit == "pineapple" || fruit == "kiwi") && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday" || day == "saturday" || day == "sunday"))
   {
      // This will run if user enters correct values
      if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
      {
         float result;
         if (fruit == "banana")
         {
            float price1 = 2.50;
            result = price1 * quantity;
         }
         if (fruit == "apple")
         {
            float price2 = 1.20;
            result = price2 * quantity;
         }
         if (fruit == "orange")
         {
            float price3 = 0.80;
            result = price3 * quantity;
         }
         if (fruit == "grapefruit")
         {
            float price4 = 1.45;
            result = price4 * quantity;
         }
         if (fruit == "kiwi")
         {
            float price5 = 2.70;
            result = price5 * quantity;
         }
         if (fruit == "pineapple")
         {
            float price6 = 5.50;
            result = price6 * quantity;
         }
         if (fruit == "grapes")
         {
            float price7 = 3.85;
            result = price7 * quantity;
         }
         return result;
      }
      else if (day == "saturday" || day == "sunday")
      {
         float result1;
         if (fruit == "banana")
         {
            float price8 = 2.70;
            result1 = price8 * quantity;
         }
         if (fruit == "apple")
         {
            float price9 = 1.25;
            result1 = price9 * quantity;
         }
         if (fruit == "orange")
         {
            float price10 = 0.90;
            result1 = price10 * quantity;
         }
         if (fruit == "grapefruit")
         {
            float price11 = 1.60;
            result1 = price11 * quantity;
         }
         if (fruit == "kiwi")
         {
            float price12 = 3.00;
            result1 = price12 * quantity;
         }
         if (fruit == "pineapple")
         {
            float price13 = 5.60;
            result1 = price13 * quantity;
         }
         if (fruit == "grapes")
         {
            float price14 = 4.20;
            result1 = price14 * quantity;
         }
         return result1;
      }
   }
   else
   {
      // This will run if user enters any invalid fruit or day
      cout << "Error"<<endl;
      return 0.0;
   }

   //  cout<<"Error";
   return 0.0;
}
