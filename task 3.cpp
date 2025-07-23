
	#include <bits/stdc++.h>

using namespace std;

class product{
private:
    int price;
   int stock;

public:
    string productname;
    string category;

//constructor
    Student(int p, int s, string p, string c) {
     price=p;
       stack=s;
        productname = p;
        category=c;
    }

    // Setter 
    void setMarks(int p,int s) {
        price=p;
        stock=s;
    }

    // Getter 
    float getMarks() const {
        return price;
        return stock;
    }

    // Method to display student details
    void displayDetails() const {
        cout << "product details:" << endl;
        cout << "price: " << price << endl;
        cout << "stock: " << stock << endl;
        cout << "productname: " <<productname << endl;
        cout << "category: " <<category<< endl;
    }
};

int main() {
   
 product p1(100, 99, "earphones", "electronics");

 
    s1.displayDetails();

    s1.setMarks(101,45);

    
    cout << "\nAfter updating marks:" << endl;
    s1.displayDetails();

    return 0;
}

