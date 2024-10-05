#include<iostream>
#include<string.h>
using namespace std;

string projectTimeCalculation(int neededHours,int days,int workers);

int main()
{
    int neededHours,days,workers;
    string result;
    cout<<"Enter the needed hours: ";
    cin>>neededHours;
    cout<<"Enter the days that a firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    result=projectTimeCalculation(neededHours,days,workers);
    cout<<result;
    return 0;
}


string projectTimeCalculation(int neededHours,int days,int workers)
{
    float WorkingHoursOfAllDays;
    int trainingHours,totalWorkingHours,workersTimeToWork,projectTime;
    string result;
    
    //working hours of a single day is 8 hours and overtime is 2 hours
    
    WorkingHoursOfAllDays=days*(8+2);
    trainingHours=(10.0/100.0)*WorkingHoursOfAllDays;
    totalWorkingHours=WorkingHoursOfAllDays-trainingHours;
    workersTimeToWork= (totalWorkingHours*workers);
    projectTime=workersTimeToWork;
    
    if(projectTime<neededHours)
    {
        int timeNeeded=neededHours-projectTime;
        result="Not enough time!"+ to_string(timeNeeded)+" hours needed";
        return result;
    }
    
    if(projectTime>=neededHours)
    {
        int timeLeft=projectTime-neededHours;
        result="Yes!"+ to_string(timeLeft)+ " hours left";       
        return result;
    }
}
