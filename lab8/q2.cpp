#include<iostream>
using namespace std;

class Media {
    protected:
        string creator;
    public:
       virtual void setDetails() = 0;
       virtual void getDetails() = 0;
};
class Book : public Media {
    private:
        int pages;
    public:
        void setDetails() {
            cout<<"Enter the name of the author:"<<endl;
            getline(cin>>ws, creator);
            cout<<"Enter the number of pages in the book:"<<endl;
            cin>>pages;
        }
        void getDetails() {
            cout<<endl<<"Book wrriten by: "<<creator<<endl
                <<"No of pages = "<<pages<<endl;
        }
};
class AudioTape : public Media {
    private:
        int length;
    public:
        void setDetails() {
            cout<<"Enter the name of the recorder:"<<endl;
            getline(cin>>ws, creator);
            cout<<"Enter the length of the tape:"<<endl;
            cin>>length;
        }
        void getDetails() {
            cout<<endl<<"Tape recorded by: "<<creator<<endl
                <<"Tape length = "<<length<<endl;
        }
};

int main (){
    Book harryPotter;
    AudioTape radio;
    harryPotter.setDetails();
    radio.setDetails();
    harryPotter.getDetails();
    radio.getDetails();
    return 0;
}

// Output:
// Enter the name of the author:
// Jk Rowling
// Enter the number of pages in the book:
// 1000
// Enter the name of the recorder:
// Narayan Gopal
// Enter the length of the tape:
// 666 

// Book wrriten by: Jk Rowling
// No of pages = 1000

// Tape recorded by: Narayan Gopal
// Tape length = 666
