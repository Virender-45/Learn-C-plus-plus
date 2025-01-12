#include <iostream>

using namespace std;

int main(){
    //For break
    // for(int i = 0; i < 40; i++){
    //     if(i==26){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    //For continue
    for(int i = 0; i < 20; i++){
        if(i==16){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}