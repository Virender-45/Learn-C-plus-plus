#include <iostream>
#include <deque>
#include <stack>
#include <thread>
#include <queue>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <algorithm>

using namespace std;


//Creating custom comparatoor

bool comparatoor(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

int main()
{
    int arr[5] = {1, 45, 64, 34, 2};
    sort(arr, arr + 5);
    // sort(arr, arr + 5, greater<int>());     //To sort in reverse order, add comparator ' greater<int>()'

    vector<int> vec = {1, 45, 64, 34, 2};
    sort(vec.begin(), vec.end());
    // sort(vec.begin(), vec.end(),  greater<int>());

    for(auto val : arr){
        cout<<val << " ";
    }
    cout<<endl;
    for(auto val : vec){
        cout<<val << " ";
    }
    cout<<endl;

    vector<pair<int, int>> vecp = {{34, 85}, {36, 83}, {38, 87}, {2, 73}};

    sort(vecp.begin(), vecp.end(), comparatoor);     //The array is sorted on the basis of first value
    // sort(vecp.begin(), vecp.end());     //The array is sorted on the basis of senond value using function

    for(auto p : vecp){
        cout<< p.first << " "<<p.second <<endl;
    }

    return 0;
}
