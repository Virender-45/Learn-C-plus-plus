#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{

    vector<int> vec;
    int ele, size;
    // cout << "Enter the size of vector : ";
    // cin >> size;

    // vector<int> :: iterator iter = vec.begin();

    vec.insert(vec.begin() , 4, 3); //To insert same element multiple times
    vec.insert(vec.begin(), 1);
    vec.insert(vec.begin(), 2);

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter vector element : ";
    //     cin >> ele;
    //     vec1.push_back(ele);
    // }
    for(auto i = vec.begin(); i != vec.end(); i++){
        cout<< *(i) <<" ";
    }



    return 0;
}
