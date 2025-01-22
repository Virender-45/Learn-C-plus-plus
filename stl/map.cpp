#include<iostream>
#include<deque>
#include<stack>
#include <thread>
#include <queue>
#include <map>

using namespace std;


int main(){
    //(key, value) Key is always unique
    /*map<string, int> m;

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
    */

    //Multimap

    multimap<string, int> mm;   //Can insert multiple vales with same key

    mm.emplace("tv", 100);
    mm.emplace("tv", 453);
    mm.emplace("tv", 10450);
    mm.emplace("tv", 13500);
    // mm.emplace("camera", 345);
    // mm.emplace("headphone", 678);
    // mm.emplace("laptop", 234);

    // mm.erase("tv");  //Erase all keys started with tv
    // mm.erase(mm.find("tv"));    //Erase only first key

    for(auto p : mm){
        cout<< p.first<<" "<< p.second<<endl;
    }

    return 0;
}
