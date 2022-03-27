// Make use of a friend class to access private data members of another class.
#include<iostream>
using namespace std;

class Subject {
    private:
        float marks;
    public:
    friend class Result;
        void setMarks() {
            cout<<"Enter the marks:"<<endl;
            cin>>marks;
        }
};
class Result {
    private:
        int pass;
    public:
        int computeResult(Subject sub1, Subject sub2) {
            if(sub1.marks >= 40 && sub2.marks >= 40) 
                pass = 1;
            else 
                pass = 0;
            return pass;
        }
};

int main (){
    Subject maths, eng;
    maths.setMarks();
    eng.setMarks();
    Result firstTerm;
    int result = firstTerm.computeResult(maths, eng);
    result ? cout<<"You did the impossible." : cout<<"As always";
    return 0;
}

// Output: 
// Enter the marks:
// 40
// Enter the marks:
// 40
// You have done the impossible.