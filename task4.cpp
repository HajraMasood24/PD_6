#include <iostream>
using namespace std;
float due(char t, int mins, char sc);
main()
{
    char sc;
    char t;
    int mins;
    cout<<"Enter the service code(R/r for regular, P/p for premium):";
    cin>>sc;
    if(sc=='p' || sc=='P')
    {
        cout<<"Enter time of the call(D/d for day, N/n for night):";
        cin>>t;
    }


    cout<<"Enter the number of minutes used:";
    cin>>mins;
    float result=due(t, mins, sc);
    
	if (sc=='r' || sc=='R')
	{
		cout<<"Service Type: Regular"<<endl;
	}
	if (sc=='p' || sc=='P')
	{
		cout<<"Service Type: Premium"<<endl;
	}
	else
	{
		cout<<"Service Type: error";
	}
   
    cout<<"Total Minutes Used:"<<mins<<" minutes"<<endl;
    cout<<"Amount due:$"<<result;


    
}   
float due(char t, int mins, char sc)

{
    float ttl;
    
   
    if(sc=='r' || sc=='R')
    {
        if (mins>50)
        {
            ttl=10+0.20*(mins-50);
        }
        if (mins<50)
        {
            ttl=10;
        }
    }
    if(sc=='p' || sc=='P')
    {
        if(t=='N' || t=='n' && mins>100)
        {
             ttl=25+0.05*(mins-100);
        }
         if(t=='N' || t=='n' && mins<=100)
        {
             ttl=25;
        }
         if(t=='P' || t=='p' && mins>75)
        {
             ttl=25+0.10*(mins-75);
        }
         if(t=='N' || t=='n' && mins<=75)
        {
             ttl=25;
        }
    
    }

    return ttl;
}