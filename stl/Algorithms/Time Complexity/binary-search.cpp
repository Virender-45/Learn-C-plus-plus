#include <iostream>
#include <algorithm>>

using namespace std;

int binarySearch(int arr[], int s, int e, int target){
    while(s <= e){
        int mid = s + (e - s)/2;
        if(arr[mid] < target){
            s = mid + 1;
        }
        else if(arr[mid] > target){
            e = mid - 1;
        }
        else{
            return mid;
        }
    }
}

int main(){
    int arr[10] = {3, 5, 7, 1, 9, 8, 2, 4, 6, 10};

    sort(arr, arr + 10);

    for(int val : arr){
        cout<<val <<" ";
    }

   cout<< binarySearch(arr, 0, 9, 4);

    return 0;
}
