#include <iostream>
using namespace std;
string sign(int d,string m);
main()
{
    int d;
    string m;
    string output;
    cout<<"Enter the day of birth:";
    cin>>d;
    cout<<"Enter the month of birth (e.g.,January, Febuary):";
    cin>>m;
    output=sign(d,m);
    cout<<"Zodiac Sign:"<<output<<endl;

}
string sign(int d,string m)

{
    if((m== "March" && (d>=21 && d<=31)) || (m== "April" && (d>=1 && d<=19)))
    {
        return "The Aries";
    }

    if((m== "April" && (d>=20 && d<=30)) || (m== "May" && (d>=1 && d<=20)))
    {
        return "Taurus";

    }
    if((m== "May" && (d>=21 && d<=31)) || (m== "June" && (d>=1 && d<=20)))
    {
        return "Gemini";

    }
    if((m== "June" && (d>=21 && d<=30)) || (m== "July" && (d>=1 && d<=22)))
    {
       return "Cancer";

    }
    if((m== "July" && (d>=20 && d<=31)) || (m== "August" && (d>=1 && d<=22)))
    {
        return "Leo";

    }
    if((m== "August" && (d>=23 && d<=31)) || (m== "September" && (d>=1 && d<=22)))
    {
        return "Virgo";

    }
    if((m== "September" && (d>=23 && d<=30)) || (m== "October" && (d>=1 && d<=22)))
    {
        return "Libra";

    }
    if((m== "October" && (d>=23 && d<=31)) || (m== "November" && (d>=1 && d<=21)))
    {
        return "Scorpio";

    }
    if((m== "November" && (d>=22 && d<=30)) || (m== "December" && (d>=1 && d<=21)))
    {
        return"Sagittarius";

    }
    if((m== "December" && (d>=22 && d<=31)) || (m== "January" && (d>=1 && d<=19)))
    {
        return "Capricon";

    }
    if((m== "January" && (d>=20 && d<=31)) || (m== "February" && (d>=1 && d<=18)))
    {
        return "Aquarius";

    }
}    