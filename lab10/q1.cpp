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