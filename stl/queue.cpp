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
    cout<< endl;

    //Priority Queue

    priority_queue<int> pq;     //Place the highest value at the top of the queue

    pq.push(1);
    pq.push(23);
    pq.push(435);
    pq.push(45);
    pq.push(3);

    priority_queue<int, vector<int>, greater<int>> pqr;    //If we want reverse order priority queue, means lowest value remains on top
    pqr.push(1);
    pqr.push(23);
    pqr.push(435);
    pqr.push(45);
    pqr.push(3);

    while(!pq.empty()){
        cout<<pq.top()<< endl;
        pq.pop();   //start popping from top
    }

    cout<< endl;

    while(!pqr.empty()){
        cout<<pqr.top()<< endl;
        pqr.pop();   //start popping from top
    }


    return 0;
}
