/* (2) Write a program to demonstrate the following scenario of hierarchical inheritance:

                                   VEHICLE

                            CAR     BOAT    AEROPLANE
*/

#include<iostream>
using namespace std;

class vehicle
{
private:
    float price;
public:
    void setprice()
    {
        cout<<"Enter the price of your vehicle (in Rs.) : ";
        cin>>price;
    }
    void getprice()
    {
        cout<<"Your vehicle's price is Rs. "<<price<<endl<<endl;
    }
};

class car:public vehicle
{
private:
    string brand;
public:
    void setbrand()
    {
        cout<<"Enter your car's brand name (eg: BMW, Ferrari, Ford...) : ";
        getline(cin>>ws,brand);
    }
    void getbrand()
    {
        cout<<"Your car's brand is "<<brand<<endl<<endl;
    }
};

class boat:public vehicle
{

private:
    string boatType;
public:
    void setboatType()
    {
        cout<<"Enter your boat's type (eg: Motorboat, Sailboat, Fishboat...) : ";
        getline(cin>>ws,boatType);
    }
    void getboatType()
    {
        cout<<"Your boat type is "<<boatType<<endl<<endl;
    }
};

class aeroplane:public vehicle
{
private:
    int flightTime;
public:
    void setflightTime()
    {
        cout<<"Enter your flight time (in hrs) : ";
        cin>>flightTime;
    }
    void getflightTime()
    {
        cout<<"Your flight time is "<<flightTime<<"hr/s"<<endl<<endl;
    }
};

int main()
{
    car obj1;
    boat obj2;
    aeroplane obj3;
    cout<<"********************** Price of your vehicle **********************"<<endl<<endl;
    obj1.setprice();
    obj1.getprice();
    cout<<"********************** Your car's brand **********************"<<endl<<endl;
    obj1.setbrand();
    obj1.getbrand();
    cout<<"********************** Your boat's type **********************"<<endl<<endl;
    obj2.setboatType();
    obj2.getboatType();
    cout<<"********************** Your plane's flight time **********************"<<endl<<endl;
    obj3.setflightTime();
    obj3.getflightTime();
    return 0;
}

/* Output

********************** Price of your vehicle **********************

Enter the price of your vehicle (in Rs.) : 500000
Your vehicle's price is Rs. 500000

********************** Your car's brand **********************

Enter your car's brand name (eg: BMW, Ferrari, Ford...) : BMW
Your car's brand is BMW

********************** Your boat's type **********************

Enter your boat's type (eg: Motorboat, Sailboat, Fishboat...) : Fishboat
Your boat type is Fishboat

********************** Your plane's flight time **********************

Enter your flight time (in hrs) : 6
Your flight time is 6hr/s

*/


