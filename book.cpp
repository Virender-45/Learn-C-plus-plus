/*
 * Defines a struct called Book with members: title, author, price.
 * Dynamically allocates memory for an array of Book.
 * Allows the user to input details for each book and print them
*/

#include <iostream>

using namespace std;

struct Book
{
    string title;
    string author;
    float price;
};

int main()
{
    int n;

    cout << "Enter the number of books : ";
    cin >> n;

    Book* books = new Book[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter deatils for book : " << i + 1 << endl;

        cout << "Title : ";
        cin >> books[i].title;

        cout << "Author : ";
        cin >> books[i].author;

        cout << "Price : ";
        cin >> books[i].price;
    }
    cout << "Book details : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "----------------------" << endl;
        cout << "Book " << i + 1;
        cout << "Title : " << books[i].title << endl;
        cout << "Author : " << books[i].author << endl;
        cout << "Price : $" << books[i].price << endl;
    }
    delete[] books;

    return 0;
}
