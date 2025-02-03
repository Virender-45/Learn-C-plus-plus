#include <iostream>
using namespace std;

template <class T>
class vector{
    public:
    T *arr;
    int size;
        vector(int m){
            size = m;
            arr = new T[size];
        }
        T dotProduct(vector &v){
            T d = 0;
            for(int i= 0; i  < size; i++){
                d += this->arr[i] * v.arr[i];
            }
                return d;
        }
};

int main(){
    // vector v1(3);
    // v1.arr[0] = 2;
    // v1.arr[1] = 6;
    // v1.arr[2] = 5;
    // vector v2(3);
    // v2.arr[0] = 2;
    // v2.arr[1] = 5;
    // v2.arr[2] = 9;

    // int a = v1.dotProduct(v2);


    vector<float> v1(3);
    v1.arr[0] = 2.6;
    v1.arr[1] = 6.4;
    v1.arr[2] = 5.8;
    vector<float> v2(3);
    v2.arr[0] = 2.2;
    v2.arr[1] = 5.6;
    v2.arr[2] = 9.3;

    float a = v1.dotProduct(v2);

    cout<<a;

    return 0;
}
