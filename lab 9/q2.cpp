// (2) Write an object oriented program to overload the Pointer-To-Member (->) operator. 
#include<iostream>
#include<string>
using namespace std;

class Details {
    private:
        string firstName;
        string secondName;
    public:
        void setData() {
            cout<<"Enter your first name:"<<endl;
            cin>>firstName;
            cout<<"Enter your second name:"<<endl;
            cin>>secondName;
        }
        void display() {
            cout<<endl<<"Your full name is: "<<firstName<<" "<<secondName<<endl; 
        }
        Details* operator ->()  {
            return this;
        }
};

int main (){
    Details sahil;
    sahil->setData();`
    sahil->display();
    return 0;
}


//output
//Enter your first name:
//sahil
//Enter your second name:
//khadka

//Your full name is: sahil khadka