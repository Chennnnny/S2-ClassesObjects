#include <iostream>
#include <string>
using namespace std;

class Person {
	// Write you code here
    public: 
        string lastName;
        string firstName;
        int securityNumber;

        Person(string firstName, string lastName, int securityNumber) {
            this -> firstName = firstName;
            this -> lastName = lastName;
            this -> securityNumber = securityNumber;
        }

        void setFirstName(string name) {
            this -> firstName = name;
        }

        string toString() {
            return "First Name: " + firstName + ", Last Name: " + lastName +", Security Number: " + to_string(securityNumber);
        }
};


int main() {
    Person ronan("Ronan", "Ogor", 784898);

    ronan.setFirstName("Ronano");
    cout << ronan.toString() << endl;

    return 0;
}