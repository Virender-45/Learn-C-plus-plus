#include<iostream>
#include<deque>
#include<stack>
#include <thread>
#include <queue>

using namespace std;


int main(){
    queue<int> q;   //Uses FIFO

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    //Same as stack functions

    while(!q.empty()){
        cout<<q.front() << " ";
        q.pop();
    }

    //Priority Queue


    return 0;
}
