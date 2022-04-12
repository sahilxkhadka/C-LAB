// Create a function template to swap 2 values. Using its template function, swap 2 integer, floating point, and character values.
#include<iostream>
using namespace std;
template<typename T>
void swapp(T x, T y) {
    T temp = x;
    x = y;
    y = temp;
    cout<<"The swapped values are "<<x<<" and "<<y<<endl;
}
template<typename T>
void getData() {
    T a, b;
    cin>>a>>b;
    swapp(a, b);
}
int main (){
    cout<<"Enter two integer values:"<<endl;
    getData<int>();
    cout<<"Enter two float values:"<<endl;
    getData<float>();
    cout<<"Enter two characters"<<endl;
    getData<char>();
    return 0;
}

// Output 
// Enter two integer values:
// 1
// 2
// The swapped values are 2 and 1
// Enter two float values:
// 1.2
// 2.4
// The swapped values are 2.4 and 1.2
// Enter two characters
// a
// b
// The swapped values are b and a