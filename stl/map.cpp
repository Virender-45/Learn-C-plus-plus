#include<iostream>
#include<deque>
#include<stack>
#include <thread>
#include <queue>
#include <map>

using namespace std;


int main(){
    //(key, value) Key is always unique
    map<string, int> m;

    m["Tv"] = 200;
    m["Laptop"] = 150;
    m["Headphone"] = 400;
    m["Phone"] = 300;
    m["Watch"] = 350;

    m.insert({"Camera", 25});
    m.emplace("Computer", 90);

    // m.erase("Tv");



    for(auto p : m){
        cout<<p.first<<" "<< p.second<<endl;    //data comes in ascending order and sorted order
    }
    cout<<m.count("Laptop") << endl;
    cout<<m["Laptop"]<<endl;

    if(m.find("Camera") != m.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    return 0;
}
