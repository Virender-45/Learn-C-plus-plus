#include <iostream>
#include <list>

using namespace std;

template <class T>
void display(list<T> &lst)
{
    list<int>::iterator itr;
    for (itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

int main()
{
    // list<int> l = {1, 2, 3, 4, 5};    //Inititialize as doubly linked list in memory

    list<int> list1;

    list1.push_back(2);
    list1.push_back(9);
    list1.push_back(7);
    list1.push_back(6);
    list1.push_back(5);
    list1.push_back(5);
    list1.push_back(5);

    list<int>::iterator iter;
    iter = list1.begin();

    // list1.sort();

    // cout<<*(iter)<<" ";
    // iter++;
    // cout<<*(iter);
    // display(list1);
    // list1.pop_front();
    // list1.pop_back();
    // list1.remove(5);
    // display(list1);

    list<int> list2(3);

    list<int>::iterator itr2;
    itr2 = list2.begin();
    *itr2 = 2;
    itr2++;
    *itr2 = 3;
    itr2++;
    *itr2 = 5;

    // display(list2);

    //merge two lists and sorts
    list1.merge(list2);

    // cout<<"list 1 after mergeing : ";
    // display(list1);

    list1.sort();

    //reversing the list
    list1.reverse();
    display(list1);




    // l.push_back(3);
    // l.push_back(4);
    // l.push_back(5);
    // l.push_back(6);
    // l.push_front(2);
    // l.push_front(1);

    // for(int val : l){
    //     cout<< val <<" ";
    // }

    return 0;
}
