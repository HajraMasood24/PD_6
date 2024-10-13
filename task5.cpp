#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayofWeek, double quantity);
main()
{
    string fruit,dayofWeek;
    float quantity,ttl;
    cout<<"Enter the fruit name:";
    cin>>fruit;
    cout<<"Enter the day of the week:";
    cin>>dayofWeek;
    cout<<"Enter the quantity:";
    cin>>quantity;
    float result=calculateFruitPrice(fruit, dayofWeek, quantity);
    if (result ==0)
    {
        cout<<"error";
    }
    else
    {
        cout<<result;
    }

}

float calculateFruitPrice(string fruit, string dayofWeek, double quantity)
{
        float ttl,pr;
    if(dayofWeek=="Monday" || dayofWeek=="Tuesday" || dayofWeek=="Wednesday" || dayofWeek=="Thursday" || dayofWeek=="Friday")
    {
        if(fruit=="banana")
        {
            pr = 2.50;
        }
         if(fruit=="apple")
        {
            pr = 1.20;
        }
         if(fruit=="orange")
        {
            pr = 0.85;
        }
         if(fruit=="grapefruit")
        {
            pr = 1.45;
        }
         if(fruit=="kiwi")
        {
            pr = 2.70;
        }
         if(fruit=="pineapple")
        {
            pr = 5.50;
        }
         if(fruit=="grapes")
        {
           pr = 3.85;
        }
    }
    if(dayofWeek=="Saturday" || dayofWeek=="Sunday")
    {
        if(fruit=="banana")
        {
            pr = 2.70;
        }
         if(fruit=="apple")
        {
            pr = 1.25;
        }
         if(fruit=="orange")
        {
            pr = 0.90;
        }
         if(fruit=="grapefruit")
        {
            pr = 1.69;
        }
         if(fruit=="kiwi")
        {
           pr = 3.00;
        }
         if(fruit=="pineapple")
        {
            pr = 5.60;
        }
         if(fruit=="grapes")
        {
           pr = 4.20;
        }
    }
        ttl=pr*quantity;
        return ttl;

    
}