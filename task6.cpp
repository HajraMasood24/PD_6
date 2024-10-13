#include <iostream>
#include <string>
using namespace std;
string calculateHotelPrices(string m, int ns);
main()
{
    string m;
    int ns;
    float st,ap;
    cout<<"Enter the month (May,June,July,August,September,October):";
    cin>>m;
    cout<<"Enter the number of stays:";
    cin>>ns;
    string res=calculateHotelPrices(m, ns);
    cout<<res;
    
}
string calculateHotelPrices(string m, int ns)
{
    float ttl,t,ap,st;
    string result;

    if (m=="May" || m=="October")
    {
        if(ns<=7)
        {
            ap=65*ns;
            st=50*ns;
            
        }
        if(ns>7 && ns<=14)
        {
           
            ap=65*ns;
            ttl=(50*ns);
            st=ttl-(ttl*0.05);
            
        }
        if(ns>14)
        {
            t=65*ns;
	    ap=t-(t*0.10);
            ttl=(50*ns);
            st=ttl-(ttl*0.30);
        }

    }
    if (m=="June" || m=="September")
    {
        if(ns<=14)
        {
            ap=68.70*ns;
            st=75.20*ns;

        }
        if(ns>14)
        {
            
            t=68.70*ns;
	    ap=t-(t*0.10);
            ttl=(68.70*ns);
            st=ttl-(ttl*0.20);

        }
    }
	if (m=="July" || m=="August")
    {
        
        st=76*ns;
	if (ns>14)
	{
		t=77*ns;
		ap=t-(t*0.10);
	}
	else
	{
		ap=77*ns;
	}
    }
    
    result += "Apartment: "+to_string(ap)+"$"+"\n";
    result += "Studio: "+to_string(st)+"$"+"\n";
    return result;
}
   
    
