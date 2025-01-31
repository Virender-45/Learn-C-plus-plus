#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream out;
    out.open("name.txt");
    out << "This is Virender" << endl;
    out << "This is Sahil" << endl;
    out << "This is Aman" << endl;
    out << "This is Abhay" << endl;
    out.close();

    ifstream in;
    in.open("name.txt");
    string str;
    //in >> str;
    //getline(in, str);

    //Use loop to display full file
    while (in.eof() == 0) {  //eof = End of file
        getline(in, str);
        cout << str << endl;
    }
    in.close();


    return 0;
}
