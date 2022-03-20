#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    void takePerson()
    {
        cout << "Ennter your name:" << endl;
        cin >> name;
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
        cin >> book;
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