#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;

public:
    Book(string t, string a)
    {
        title = t;
        author = a;
    }

    void displayDetails()
    {
        cout << "Book Details" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main()
{
    Book b("The Alchemist", "Paulo Coelho");

    b.displayDetails();

    return 0;
}