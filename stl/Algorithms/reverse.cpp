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



int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    reverse(vec.begin(), vec.end());
    // reverse(vec.begin() + 3, vec.begin() + 7);        //For a specific range

    for(auto val : vec){
        cout<< val <<" ";
    }

    return 0;
}
