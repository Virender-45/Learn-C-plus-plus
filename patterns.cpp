#include <iostream>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif


    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "*\t";
        }
        cout<<endl;
    }



    // square pattern for n = 4
    //required output
  /*1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4*/

    int n = 4;

    for (int i = 1; i <= n; i++){//outer
        for(int j = 1; j <= n; j++){//inner
            cout << j << " ";
        }
        cout<<endl;
    }
	
	//Alphabet pattern
	int n = 9;

    for (int i = 0; i < n; i++)
    { // outer
        char ch = 'A';
        for (int j = 0; j < n; j++)
        { // inner
            cout<< ch << " ";
            ch += 1;//65 + 1 => 66 i.e. 'B'
        }
        cout << endl;
    }
    
    return 0;
}
