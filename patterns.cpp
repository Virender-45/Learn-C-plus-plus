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


	// square pattern(2) for n = 3
    // required output
  /*1 2 3
    4 5 6
    7 8 9*/

    int n = 3;
    int num = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
	
	
	
	
	//triangle pattern for n = 4
    //required output
   /*
    **
    ***
    **** */
   
    int n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }



	//triangle pattern with numbers for n = 4
    //required output
  /*1
    22
    333
    4444 */
   
    int n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
	
	
	
	//triangle patter(2) n = 4
    /*required pattern
    1
    1 2
    1 2 3
    1 2 3 4*/

    int n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= i + 1; j++){
            cout<<j;
        }
        cout<<endl;
    }
	
	
	
	// reverse triangle patter(2) n = 4
    /*required pattern
    1
    2 1
    3 2 1
    4 3 2 1*/

    int n = 4;

    for (int i = 0; i < n; i++){
        for(int j = i + 1; j > 0; j--){
            cout<<j;
        }
        cout<<endl;
    }


	///Floyd's Triangle Pattern
    /*n = 4
    1
    2 3
    4 5 6
    7 8 9 10*/

    int n = 4;
    int num = 1;

    for(int i = 0;i < n; i++){
        for(int j = 1; j <= i+1; j++){
            cout<<num << " ";
            num++;
        }
        cout<<endl;
    }
	
	
	
	///Inverted Triangle Pattern
    /*n = 4
    1 1 1 1
      2 2 2
        3 3
          4*/
    
    int n = 4;
    for(int i = 0; i < n; i++){
		//spaces
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
		//nums
        for(int j = 0; j < n-i; j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    
    return 0;
}
