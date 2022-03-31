// Write a program to read and display information about an author. An author is a person. [Use private derivation] 
#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    void takePerson()
    {
        cout << "Enter your name:" << endl;
        getline(cin>>ws, name);
        cout << "Enter your age:" << endl;
        cin >> age;
    }
    void displayPerson()
    {
        cout << endl << "Name = " << name << endl
             << "Age = " << age << endl;
    }
};
class Author : private Person
{
    string book;

public:
    void takeAuthor()
    {
        takePerson();
        cout << "Enter the book writter by the author" << endl;
        getline(cin>>ws, book);
    }
    void displayAuthor()
    {
        displayPerson();
        cout << "Book = " << book << endl;
    }
};

int main()
{
    Author sahil;
    sahil.takeAuthor();
    sahil.displayAuthor();
    return 0;
}

// Output 
// Enter your name:
// Govinda Subedi
// Enter your age:
// 32
// Enter the book writter by the author
// C programming

// Name = Govinda Subedi
// Age = 32
// Book = C programming