#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream nameFile("name.txt");
    string name;
	cout << "Enter your name: ";
	getline(cin, name);
    nameFile << "Your name is " + name << endl;
	nameFile.close();


     ifstream readFile("name.txt");
     string storedName;
     getline(readFile, storedName);
     cout << storedName;
     readFile.close();


    return 0;
}
