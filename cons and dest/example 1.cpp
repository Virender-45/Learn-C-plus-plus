#include <iostream>
#include <math.h>
using namespace std;

class Point{
    int x, y;
    friend void distance(Point, Point);
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The point is : ("<<x<<", "<<y<<")"<<endl;
        }
};
void distance(Point a, Point b){
    int x, y, result;
    x = (b.x - a.x) * (b.x - a.x);
    y = (b.y - a.y) * (b.y - a.y);

    cout<<"The distance between two is : "<<sqrt(x+y)<<endl;
}

int main(){
    Point a(4, 5);
    Point b(8, 6);

    distance(a, b);

    // a.displayPoint();
    // b.displayPoint();

    return 0;
}
