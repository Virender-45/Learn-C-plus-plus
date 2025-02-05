#include <iostream>
#include <map>
#include <unordered_map>
#include <deque>

using namespace std;

int main()
{
    // Map is an associative array
    //(key, value) Key is always unique
    /*map<string, int> m;       //Store data in order way

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

    // Multimap
    /*
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
        */

    /*
    //unordered_map

    unordered_map<string, int> um;   //Store data into unorder way

     um["Tv"] = 200;
     um["Laptop"] = 150;
     um["Headphone"] = 400;
     um["Phone"] = 300;
     um["Watch"] = 350;

     for(auto p : um){
         cout<< p.first << " "<<p.second<<endl;
     }
     */

    map<string, int> marksMap;

    marksMap["Virender"] = 88;
    marksMap["Rana"] = 34;
    marksMap["Sahil"] = 63;

    marksMap.insert({"Aman", 78});
    marksMap.emplace("Abhay", 65);
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    return 0;
}
