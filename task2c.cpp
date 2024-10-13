#include <iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialSciences, float marksBiology);
string calculateGrade(float average);
main()
{
    string name,result;
    float avr;
    float marksEnglish,marksMaths,marksChemistry,marksSocialSciences,marksBiology;  
    cout<<"Enter student name:";
    cin>>name;
    cout<<"Enter marks for English:";
    cin>>marksEnglish;
    cout<<"Enter marks for Maths:";
    cin>>marksMaths;
    cout<<"Enter marks for Chemistry:";
    cin>>marksChemistry;
    cout<<"Enter marks for SocialSciences:";
    cin>>marksSocialSciences;
    cout<<"Enter marks for Biology:";
    cin>>marksBiology;
    cout<<"Student name: "<<name<<endl;
    avr=calculateAverage( marksEnglish, marksMaths, marksChemistry, marksSocialSciences, marksBiology) ;
    cout<<"Percentage:"<<avr<<"%"<<endl;
    cout<<"Grade:"<<calculateGrade(avr)<<endl;

}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialSciences, float marksBiology)
{
    float sum,average;
    sum=(marksEnglish+marksMaths+marksChemistry+marksSocialSciences+marksBiology);
    average=sum/5;
    return average;
}

string calculateGrade(float average)
{
    if(average>=90 && average<100)
        cout<< "A+";
    if(average>=80 && average<90)
        cout<< "A";
    if(average>=70 && average<80)
        cout<< "B+";
    if(average>=60 && average<70)
        cout<< "B";
    if(average>=50 && average<60)
        cout<< "C";
    if(average>=40 && average<50)
        cout<< "D";
    if(average<40)
        cout<< "F";
    

}