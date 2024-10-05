#include<iostream>
using namespace std;

float taxCalculator( char type,float price);

int main()
{
    char type;
    float price;
    float finalPrice;
    cout<<"Enter the vehicle type code (M,E,S,V,T): ";
    cin>>type;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    finalPrice=taxCalculator(type,price);
    cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalPrice;
    return 0;
}


float taxCalculator(char type,float price)
{
    float tax,finalPrice;
    if(type=='M')
    {
        tax=(6.0/100.0)*price;
        finalPrice=price+tax;
        return finalPrice;

    }

    if(type=='E')
    {
        tax=(8.0/100.0)*price;
        finalPrice=price+tax;
        return finalPrice;

    }

    if(type=='S')
    {
        tax=(10.0/100.0)*price;
        finalPrice=price+tax;
        return finalPrice;

    }

    if(type=='V')
    {
        tax=(12.0/100.0)*price;
        finalPrice=price+tax;
        return finalPrice;

    }

    if(type=='T')
    {
        tax=(15.0/100.0)*price;
        finalPrice=price+tax;
        return finalPrice;

    }
}