// * Uses a pointer to iterate through a character array (string) and counts the number of vowels in it.
#include <iostream>

using namespace std;

int main(){
    char name[50];
    cout<<"Enter your first name : ";
    cin>>name;

    char* ptr = name;
    int vowel = 0;

    while(*ptr != '\0'){
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u'){
            vowel++;
        }
        ptr++;
    }
    cout<<"Vowels in "<<name<<" is : "<<vowel<<endl;
    
    return 0;
}