//Using a friend function, print the sum of private data members of two classes. 
#include<iostream>
using namespace std;
class SecondYear;
class FirstYear {
    private:
        float percentage;
    public:
        friend float calcTotal(FirstYear, SecondYear);
        void setPrecentage() {
            do {
                cout<<"Enter the perecentage you obtained in year "<<":"<<endl;
                cin>>percentage;
            }while(percentage > 100.0);
        }
};
class SecondYear {
    private:
        float percentage;
    public:
        friend float calcTotal(FirstYear, SecondYear);
        void setPrecentage() {
            do {
                cout<<"Enter the perecentage you obtained in year "<<":"<<endl;
                cin>>percentage;
            }while(percentage > 100.0);
        }
};

float calcTotal(FirstYear result1, SecondYear result2) {
    return ( result1.percentage + result2.percentage );
}


int main (){
    FirstYear resultFirst;
    SecondYear resultSecond;
    resultFirst.setPrecentage();
    resultSecond.setPrecentage();
    cout<<"Total Percentage = "<<calcTotal(resultFirst, resultSecond)<<"%";
    return 0;
}

// Output: 
// Enter the perecentage you obtained in year 1:
// 99.9
// Enter the perecentage you obtained in year 2:
// 9.99
// Total Percentage = 109.89%