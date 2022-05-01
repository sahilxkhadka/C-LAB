//(2) Write a program to demonstrate a class template for any suitable situation of your choice.
#include<iostream>
using namespace std;
template<class T>
class Average{
    private:
        T x, y;
    public:
        Average(T x, T y) {
            this->x = x;
            this->y = y;
        }
        void display() {
            cout<<"The average value is "<<(x + y) / 2<<endl;
        }
};
int main (){
    Average <int>avg1(2, 4);
    Average <float>avg2(6.8, 7.8); 
    avg1.display();
    avg2.display();
    return 0;
}

// Output
// The average value is 3
// The average value is 7.3
