//Write an object-oriented program for the following scenario. Make use of Virtual Class. 
//   ________Elcetronic Device _______
//  |                                  |
//Printer                            Scanner
//  |_________________________________|
//                    |   
//            Photocopy Machine
#include<iostream>
using namespace std;

class ElectronicDevice {
    protected:
        int manufacturedYear;
    public:
        void setDate() {
            cout<<"Enter the year of manufacture:"<<endl;
            cin>>manufacturedYear;
        }
        void getDate() {
            cout<<endl<<"This  product was manufactured in the year "<<manufacturedYear<<endl;
        }
};
class Printer : virtual public ElectronicDevice {
    protected:
        int speed;
    public:
        void setSpeed() {
            cout<<"Enter its printing speed:"<<endl;
            cin>>speed;
        }
        void getSpeed() {
            cout<<"It can produce "<<speed<<" copies per second"<<endl;
        }
};
class Scanner : virtual public ElectronicDevice {
    protected:
        int resolution;
    public:
        void setRes() {
            cout<<"Enter the resolution upto which it can operate:"<<endl;
            cin>>resolution;
        }
        void getRes() {
            cout<<"Resolution Capacity = "<<resolution<<endl;
        }
};
class PhotocopyMachine : public Printer, public Scanner{
    private:
        bool colorCopy;
    public:
        void setColorCopy() {
            cout<<"Can this give colorful copies?"<<endl;
            cin>>colorCopy;
        }
        void getColorCopy() {
            if(colorCopy)
                cout<<"It can give colorful copies too!!"<<endl;
            else
                cout<<"It cannot give colorful copies!!"<<endl;
        }
};

int main (){
    PhotocopyMachine stationary;
    stationary.setDate();
    stationary.setSpeed();
    stationary.setRes();
    stationary.setColorCopy();

    stationary.getDate();
    stationary.getSpeed();
    stationary.getRes();
    stationary.getColorCopy();
    
    return 0;
}

// Output:
// Enter the year of manufacture:
// 2019
// Enter its printing speed:
// 100
// Enter the resolution upto which it can operate:
// 108
// Can this give colorful copies?
// 1

// This product was manufactured in the year 2019
// It can produce 100 copies per second
// Resolution Capacity = 108
// It can give colorful copies too!!