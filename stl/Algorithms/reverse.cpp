#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec2 = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    reverse(vec.begin(), vec.end());
    // reverse(vec.begin() + 3, vec.begin() + 7);        //For a specific range

    for(auto val : vec){
        cout<< val <<" ";
    }

    //Add Permutation

    string s = "abc";
    string s = "def";


    for(int i = 0; i < 100; i++){
    next_permutation(s.begin(), s.end());
        cout<< s << "\t";
    }
    
    return 0;
}
