#include <iostream>
using namespace std;

class ShopItem{
    int id;
    float price;

public:
    void setData(int a, float b){
        id = a;
        price = b;
    }
    void getData(void){
        cout << "The id of item is : " << id << endl;
        cout << "The price of item is : " << price << endl;
    }
};

int main(){
    int p, i;
    float q;
    int size = 2;
    // int *ptr = &size;
    // int *ptr = new int[34];
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;

    for (i = 0; i < size; i++){
        cout << "Enter the id of item " << i + 1 << " : ";
        cin >> p;
        cout << "Enter the price of item " << i + 1 << " : ";
        cin >> q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++){
        cout << "The details of item " << i + 1 << " is : " << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}
