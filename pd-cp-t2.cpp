#include<iostream>
#include<iomanip>
using namespace std;

float pyramidVolume(float length,float width,float height,string unit);

int main()
{
    float length,width,height;
    string unit;
    float volume;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters,centimeters,meters,kilometers): ";
    cin>>unit;
    volume=pyramidVolume(length,width,height,unit);
    cout<<"The volume of the pyramid is :"<<fixed<<setprecision(6)<<volume<<" cubic "<<unit;
    return 0;
}


float pyramidVolume(float length,float width,float height,string unit)
{
    float volume;
    volume=(length*width*height)/3;
    if(unit=="millimeters")
    {
        volume=volume*1000;
        return volume;
    }

     if(unit=="centimeters")
    {
        volume=volume*100;
        return volume;
    }

     if(unit=="meters")
    {
        volume=volume;
        return volume;
    }

     if(unit=="kilometers")
    {
        volume=volume/1000;
        return volume;
    }
}
