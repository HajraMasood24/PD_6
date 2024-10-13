#include <iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main()
{
	string yearType;
	int holidays, hometownWeekends;
	cout<<"Enter year type:";
	cin>>yearType;
	cout<<"Enter number of holidays:";
	cin>>holidays;
	cout<<"Enter number of weekends:";
	cin>>hometownWeekends;
	int result = calculateVolleyballGames(yearType, holidays, hometownWeekends);
	cout<<result;
}

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
	
	int m,ws,h,w,ttl;
	if (yearType=="leap")
	{
		m=48+(48*0.15);
		ws=m-hometownWeekends;
		h=holidays*0.6667;
		w=ws*0.75;
		ttl=w+h+hometownWeekends;
	}
	if (yearType=="normal")
	{
		ws=48-hometownWeekends;
		h=holidays*0.6667;
		w=ws*0.75;
		ttl=h+w+hometownWeekends;
	}
	return ttl;
}


		



		
		
		


