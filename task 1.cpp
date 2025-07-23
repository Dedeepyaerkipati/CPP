
	#include <bits/stdc++.h>

using namespace std;

class Student {
private:
    int rollNo;
    float marks;

public:
    string name;
    string branch;

//constructor
    Student(int r, float m, string n, string b) {
        rollNo = r;
        marks = m;
        name = n;
        branch = b;
    }

    // Setter 
    void setMarks(float m) {
        marks = m;
    }

    // Getter 
    float getMarks() const {
        return marks;
    }

    // Method to display student details
    void displayDetails() const {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
   
    Student s1(101, 99, "Dedeepya", "Computer Science");

 
    s1.displayDetails();

    s1.setMarks(92.0);

    
    cout << "\nAfter updating marks:" << endl;
    s1.displayDetails();

    return 0;
}

