#include <iostream>
using namespace std;
string ra(string temp, string hum);
main()
{
	string temp,hum;
	cout<<"Enter temperature (warm or cold):";
	cin>>temp;
	cout<<"Enter humidity (dry or humid):";
	cin>>hum;
	string result=ra(temp,hum);
	cout<<"Recommanded activity:"<<result;
	

}

string ra(string temp, string hum)
{
	if(temp=="warm" && hum=="dry")
	{
		return "Play tennis";
	}
	if(temp=="warm" && hum=="humid")
	{
		return "swim";
	}
	if(temp=="cold" && hum=="dry")
	{
		return "Play basketball";
	}
	if(temp=="cold" && hum=="humid")
	{
		return "Watch tv";
	}
}