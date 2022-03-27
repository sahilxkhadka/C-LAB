//Using a friend function, print the sum of private data members of two classes. 
#include<iostream>
using namespace std;

class Result {
    private:
        float percentage;
        static int count;
    public:
        friend float calcTotal(Result, Result);
        void setPrecentage() {
            count++;
            do {
                cout<<"Enter the perecentage you obtained in year "<<count<<":"<<endl;
                cin>>percentage;
            }while(percentage > 100.0);
        }
};
int Result :: count;
float calcTotal(Result year1, Result year2) {
    return ( year1.percentage + year2.percentage );
}


int main (){
    Result firstYear, secondYear;
    firstYear.setPrecentage();
    secondYear.setPrecentage();
    cout<<"Total Percentage = "<<calcTotal(firstYear, secondYear)<<"%";
    return 0;
}

// Output: 
// Enter the perecentage you obtained in year 1:
// 99.9
// Enter the perecentage you obtained in year 2:
// 9.99
// Total Percentage = 109.89%