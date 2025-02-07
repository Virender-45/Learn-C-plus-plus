#include <iostream>

using namespace std;

int main(){
    int marks[4] = {23, 45, 56, 98};
    // for(int i = 0; i < 4; i++){
    //     cout<<marks[i]<<endl;
    // }
    // int i = 0;
    // while (i < 4)
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // }
    
    // Pointers and arrays

    int* p = marks;
    // cout<<"The value at marks[0] is : "<<*(p)<<endl;
    // cout<<"The value at marks[1] is : "<<*(++p)<<endl;
    // cout<<"The value at marks[2] is : "<<*(++p)<<endl;
    // cout<<"The value at marks[3] is : "<<*(++p)<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks["<<i<<"] is : "<<*(p+i)<<endl;
    }
    


    

    return 0;
}
