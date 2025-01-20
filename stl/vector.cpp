#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};

    // vec.insert(vec.begin() + 2, 10);
    // vec.erase(vec.begin() + 2, vec.begin() + 4);
    // vec.clear();  it erase the data but capacity remains
    // vec.empty();

    //Print with foreach loop
    for(int i : vec){
        cout<< i <<" ";
    }

    //Print with for loop
    //vector<int>::iterator i; can be write as auto
    for(auto i = vec.begin(); i != vec.end(); i++){
        cout<< *(i) <<" ";
    }
    for(auto i = vec.rbegin(); i != vec.rend(); i++){
        cout<< *(i) <<" ";
    }
  return 0;
}
