#include<iostream>
#include<deque>
#include<stack>

using namespace std;

int main(){
    stack<int> s;

    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);

    cout<<s.size()  <<endl;

    // while(!s.empty()){
    //     cout<<s.top()<< " ";
    //     s.pop();
    // }

    stack<int> s2;
    s2.swap(s);

    cout<<s.size();
    cout<<s2.size();


return 0;
}
