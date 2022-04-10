//(1) Create a function template to swap 2 values. Using its template function, swap 2 integer, floating point, and character values. 
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
/*
Enter two integer values:
-5
+5
The swapped values are 5 and -5
Enter two float values:
2.5
-5.2
The swapped values are -5.2 and 2.5
Enter two characters
a
b
The swapped values are b and a
*/