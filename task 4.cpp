#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string isbn;
    int copiesAvailable;

public:
    string title;
    string author;

  
    Book(string t, string a, string i, int copies) {
        title = t;
        author = a;
        isbn = i;
        copiesAvailable = copies;
    }

 
    void issueBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "Book issued successfully. Copies left: " << copiesAvailable << endl;
        } else {
            cout << "No copies available to issue.\n";
        }
    }

    void addCopies(int n) {
        if (n > 0) {
            copiesAvailable += n;
            cout << n << " copies added. Total copies now: " << copiesAvailable << endl;
        } else {
            cout << "Invalid number of copies to add.\n";
        }
    }

    // Optional: Method to display book details
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Copies Available: " << copiesAvailable << endl;
    }
};


int main() {

    Book b1("The Alchemist", "Paulo Coelho", "978-0061122415", 5);


    b1.displayDetails();


    b1.issueBook();


    b1.addCopies(3);


    b1.issueBook();
    b1.issueBook();

 
    b1.displayDetails();

    return 0;
}

