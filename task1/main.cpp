/*
Observe the output and create a C++ class named "Person" with private attributes for age and name.
Implement setter and getter methods for both attributes. Use the class in a program to set values
and retrieve them.
• Continue the "Person" class from Task 1. Add a validation check in the setter for age to
ensure that it is a positive value. If an invalid value is provided, set a default age of 18.
*/

#include <iostream>
using namespace std;

class Person {
private:
    int age;
    string name;
public:
    // Setter
    void set_age(int x = 18) {
        if (x > 0) {
            age = x;
        } else {
            age = 18; // Default age
        }
    }

    void set_name() {
        string n;
        cout<<"enter name : ";
        getline(cin,n);
        name = n;
    }

    // Getter
    int get_age() {
        return age;
    }

    string get_name() {
        return name;
    }
};

int main() {
    Person person1;
    person1.set_age();
    cout << "Age: " << person1.get_age() << endl;

    person1.set_name();
    cout << "Name: " << person1.get_name() << endl;

    return 0;
}
