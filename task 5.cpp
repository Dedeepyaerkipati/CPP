#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    double salary;
    int empID;

public:
    string name;
    string department;


    Employee(string n, string dept, int id, double sal) {
        name = n;
        department = dept;
        empID = id;
        salary = sal;
    }

    
    void setSalary(double s) {
        if (s >= 0) {
            salary = s;
        } else {
            cout << "Invalid salary amount!" << endl;
        }
    }

    
    double getSalary() {
        return salary;
    }

   

        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    
    Employee e1("Alice Johnson", "HR", 101, 55000);

   
    e1.displayInfo();


    e1.setSalary(60000);
    cout << "\nUpdated Salary: $" << e1.getSalary() << endl;

    return 0;
}

