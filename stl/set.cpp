#include <iostream>
#include <deque>
#include <stack>
#include <thread>
#include <queue>
#include <map>
#include <set>

using namespace std;

int main()
{
    set<int> s; // Doesnot store duplicate values        O(logn)

    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(2);
    s.insert(2);

    cout << "Lower bound is : " << *(s.lower_bound(4)) << endl;
    cout << "Upper bound is : " << *(s.upper_bound(4)) << endl;

    for (auto p : s)
    {
        cout << p << " ";
    }
    cout << "\n"
         << s.size();

    //Multi Set         //can store duplicate values



    //unordered Set     //Very optimized        //Doesnot sort the values, values stores in unsroted way
    //Lower and upper bound doesnot exist in unorderedd sets

    return 0;
}
