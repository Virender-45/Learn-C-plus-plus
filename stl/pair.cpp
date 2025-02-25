#include<iostream>
#include<deque>

using namespace std;

int main(){
    pair<int, int> p = {1, 0};
    
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<char, pair<string, string>> pp = {'a', {"Virender", "Singh"}};

    cout<<pp.first<<endl;
    cout<<pp.second.first<<" ";
    cout<<pp.second.second<<endl;

    vector<pair<int, string>> vp = {{1, "Ranasaab"}, {2, "Hello"}, {3, "World"}};
    vp.push_back({4, "Nikhil"});    
    vp.emplace_back(5, "Sahil");    //Difference between push_back and emplace_back in STL and has more efficient then push_back

    for(auto val : vp){
        cout<< val.first << " "<< val.second << endl;
    }

return 0;
}
