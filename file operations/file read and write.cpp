#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string str = "Virender Singh", str2;

    // opeing file using constructor and writing it
    ofstream out("sample.txt");
    out << str;

    // opening file using constructor and reading it
    ifstream in("sample2.txt");
    // in>>str2;    //stop reading after spaces
    getline(in, str2);
    cout << str2;

    return 0;
}
