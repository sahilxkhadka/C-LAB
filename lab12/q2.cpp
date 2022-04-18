// Create a class named Person and record the data of 5 people in a file. Then, retrieve the written data and display information of only those people who are 30 yrs or older.
#include<iostream>
#include<fstream>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        void setData() {
            cout<<"Enter your name:"<<endl;
            cin>>name;
            cout<<"Enter your age:"<<endl;
            cin>>age;
        }
        void getData() {
            if (age >= 30)
                cout<<"Your name is "<<name<<" and you are "<<age<<" years old."<<endl;
        }
};

int main (){
    Person swastik[5];
    fstream rwFile("person.txt", ios::out | ios :: in);
    for (int i = 0; i < 5; i++) {
        swastik[i].setData();
        rwFile.write((char *) &swastik[i], sizeof(swastik[i]));
    }
    for(int i = 0; i < 5; i++) {
        rwFile.read((char *) &swastik[i], sizeof(swastik[i]));
        swastik[i].getData();
    }
    rwFile.close();
    return 0;
}