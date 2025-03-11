#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
    deque<int> d = {1, 2, 3, 4, 5};   //Inititialize as dynamic array in memory , random access is possible in deque
    //Same functions as list

    for( int val : d){
        cout<< val <<" ";
    }

return 0;
}
