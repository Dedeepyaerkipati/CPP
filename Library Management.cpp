#include <bits/stdc++.h>
using namespace std;
//----------- Book Class -----------
class Book {
public:
    int id;
    string title;
    string author;
    int availableCopies;

    Book(int id, string title, string author, int availableCopies) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->availableCopies = availableCopies;
    }

    void displayBook() {
        cout << "Book ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << availableCopies << endl;
        cout << "------------------------\n";
    }
};
// -- Member Class --
class Member {
public:
    int id;
    string name;
    int phoneNumber;
    vector<int> borrowedBooks;

    Member(int id, string name, int phoneNumber) {
        this->id = id;
        this->name = name;
        this->phoneNumber = phoneNumber;
    }
    void borrowBook(int bookId) {
        borrowedBooks.push_back(bookId);
    }
    bool returnBook(int bookId) {
        auto it = find(borrowedBooks.begin(), borrowedBooks.end(), bookId);
        if (it != borrowedBooks.end()) {
            borrowedBooks.erase(it);
            return true;
        }
        return false;
    }
};

// -- Library Class --
class Library {
public:
    vector<Book> books;
    vector<Member> members;

    void addBook(Book b) {
        books.push_back(b);
    }

    void addMember(Member m) {
        members.push_back(m);
    }
    void borrowBook(int memberId, int bookId) {
        for (auto &m : members) {
            if (m.id == memberId) {
                for (auto &b : books) {
                    if (b.id == bookId && b.availableCopies > 0) {
                        m.borrowBook(bookId);
                        b.availableCopies--;
                        cout << m.name << " borrowed \"" << b.title << "\"\n";
                        return;
                    }
                }
                cout << "Book not available\n";
                return;
            }
        }
        cout << "Invalid member ID\n";
    }

    void returnBook(int memberId, int bookId) {
        for (auto &m : members) {
            if (m.id == memberId) {
                for (auto &b : books) {
                    if (b.id == bookId) {
                        if (m.returnBook(bookId)) {
                            b.availableCopies++;
                            cout << m.name << " returned \"" << b.title << "\"\n";
                        } else {
                            cout << "This member didn't borrow this book\n";
                        }
                        return;
                    }
                }
            }
        }
        cout << "Invalid return request\n";
    }
};
// -- Main Function ---
int main() {
    Library lib;

    Book b1(1, "C++ Programming", "Dedeepya", 3);
    Book b2(2, "DSA", "Laasya", 2);
    lib.addBook(b1);
    lib.addBook(b2);
    Member m1(101, "Ram", 78347463);
    Member m2(102, "Tejasri", 98765432);
    lib.addMember(m1);
    lib.addMember(m2);
    lib.borrowBook(101, 1);
    lib.borrowBook(102, 2);
    lib.returnBook(101, 1);

    cout << "\nCurrent Book Details:\n";
    for (auto &b : lib.books) {
        b.displayBook();
    }
    return 0;
}
