#include<iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}
int add(int a, int b, int c){
    return a + b + c;
}
int main() {
    cout << "Sum of 5 and 10 (int): " << add(5, 10) << endl;
    cout << "Sum of 5.5 and 10.3 (double): " << add(5.5, 10.3) << endl;
    cout << "Sum of 1, 2 and 3 (int): " << add(1, 2, 3) << endl;
    return 0;
}


#include <iostream>
using namespace std;

class weight {
private:
    int kg;
public:
    weight(int x = 0) : kg(x) {} // Constructor to initialize kg
    void weightt() { // Renamed to print weight
        cout << "Weight in kg: " << kg << endl;
    }
    // Overload pre-increment (++a) 
    void operator++() {
        ++kg; // Increment weight
        return *this;
    }
    // Overload post-increment (a++)
    void operator++(int) {
        weight temp = *this;
        ++kg; // Increment weight
        return temp;
    }
    // Overload pre-decrement (--a)
    void operator--() {
        --kg; // Decrement weight
        return *this;
    }
};

int main() {
    weight a(5); // Initialize with 5kg
    a.weightt(); // Print initial weight
    ++a; // Pre-increment
    a.weightt();
    a++; // Post-increment
    a.weightt();
    --a; // Pre-decrement
    a.weightt();
    return 0;
}







