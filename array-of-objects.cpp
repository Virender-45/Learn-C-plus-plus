#include <iostream>
using namespace std;

class ShopItem{
protected:
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


/*
            Example
*/

#include <iostream>
#include <string>
using namespace std;

class Shop {
    string product;
    int pId, stock;
    float price;

public:
    // Shop(string p, int id, int s, float pr) : product(p), pId(id), stock(s), price(pr){}

    void setData(string p, int id, int s, float pr) {
        product = p;
        pId = id;
        price = pr;
        stock = s;
    }
    void getData(void) {
        cout << "The product name is : " << product << endl;
        cout << "The product id is : " << pId << endl;
        cout << "The product has " << stock << " left in stock " << endl;
        cout << "The price of product is : " << price << endl
            << endl;
    }
};

int main()
{
    int size = 2;
    Shop* ptr = new Shop[size];
    Shop* ptrTemp = ptr;
    string p;
    float price;
    int id, stock;

    for (int i = 0; i < size; i++) {
        cout << "Enter the details of product " << i + 1 << endl;
        cout << "Enter Name : ";
        getline(cin, p);
        cout << "Enter ID : ";
        cin >> id;
        cout << "Enter stock : ";
        cin >> stock;
        cout << "Enter price : ";
        cin >> price;
        cout << endl;

		cin.ignore(); // to ignore the buffer

        ptr->setData(p, id, stock, price);

        ptr++;
    }

    for (int i = 0; i < size; i++) {
        cout << "The detail of product " << i + 1 << " is" << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}
