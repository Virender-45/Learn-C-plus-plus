#include <iostream>
#include <vector>

using namespace std;

template<class T>
void display(vector<T> &v)
{
    cout<<"Displaying"<<endl; 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main(){

    vector<int> vec1;
    vector<char> vec2(4);
    // vec2.push_back('2');
    // vec2.push_back('2');
    // vec2.push_back('2');
    // vec2.push_back('2');
    // display(vec2);
    vector<char> vec3(vec2);
    // display(vec3);
    vector<int> vec4(6, 3);
    display(vec4); cout<<endl;
    cout<<vec4.size();



    // int ele, size;
    // cout << "Enter the size of vector : ";
    // cin >> size;

    // vector<int> :: iterator iter = vec.begin();

    // vec.insert(vec.begin() , 3); //To insert same element multiple times
    // vec.insert(vec.begin(), 1);
    // vec.insert(vec.begin(), 2);

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter vector element : ";
    //     cin >> ele;
    //     vec1.push_back(ele);
    // }
    // for(auto i = vec.begin(); i != vec.end(); i++){
    //     cout<< *(i) <<" ";
    // }

    // vec.erase(vec.begin(), vec.end());

    // cout<<"helo" <<endl;
    // display(vec);
    // vec.size();



    return 0;
}
