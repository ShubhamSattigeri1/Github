//Single Inheritence
#include<iostream>
using namespace std;
class A{
    public : void one(){
        cout<<"This is class One.";
    } 
};
class B : public A
{
    public : void Two(){
        cout<<"\nThis is class Two."<<endl;
    }
};
int main(){
    B a1;
    A a1;
    a1.one();
    a1.Two();
    return 0;
}
//Managing Bank Account using multiple Inheritence
#include<iostream>
#include<string>
using namespace std;

class accname {
public:
    void aname() {
        string nn;
        cout << "Enter Your name: ";
        cin>>nn;
        cout << "Your name is: " << nn << endl;
    }
};

class DOB {
public:
    void cbirth() {
        string ob;
        cout << "Enter Your DOB (DD/MM/YYYY): ";
        cin >> ob;
        cout << "Your DOB is: " << ob << endl;
    }
};

class branch : public accname, public DOB {
public:
    void name() {
        string bname;
        cout << "Enter Branch Name: ";
        cin>>bname;
        cout << "Your Branch name is: " << bname << endl;
    }
};

int main() {
    branch a1;
    a1.aname();
    a1.cbirth();
    a1.name();
    return 0;
}
// // // //Function Overloadding
#include<iostream>
using namespace std;

class area {
public:
    int square(int a) {
        int result = a * a;
        cout << "The area of square is: " << result << endl;
        return result;
    }

    int rectangle(int a, int b) {
        int result = a * b;
        cout << "The area of rectangle is: " << result << endl;
        return result;
    }

    double circle(double a) { // Changed parameter type to double
        double result = 3.14 * a * a;
        cout << "The area of circle is: " << result << endl;
        return result;
    }
};

int main() {
    area a1;
    a1.square(4);
    a1.rectangle(5, 6);
    a1.circle(5.2); // Passing a double value
    return 0; // Added return statement
}
// Write a C++ program to perform function overloading add function to calculate addition of different data type values and varying no of parameters.
#include<iostream>
using namespace std;
class Add{
    public : int one(int a, int b){
        int result;
        result = a + b;
        cout<<"The Addition of Two integers is : "<<result<<endl;
        return result;
    }
    public : double one(double a, double b){
        double result;
        result = a+b;
        cout<<"The Addition of two Double is : "<<result<<endl;
        return result;
    }
};
int main(void){
    Add a1;
    a1.one(2,3);
    a1.one(2.5,5.7);
}
//Function Template
#include<iostream>
using namespace std;
template <typename T>
void add(T a,T b){
    int result;
    result = a+b;
    cout<<"The addition is : "<<result<<endl;
}
int main(void){
    add(5,5);
}

//Over ridding :

#include<iostream>
using namespace std;
class A{
    public : virtual void one(){
        cout<<"This is Base Class."<<endl;
    }
};
class B : public A
{
    public : void one() override{
        cout<<"This is Derived Class...";
    }
};
int main(void){
    A a;
    B b;
    a.one();
    b.one();
}

//Exception Hnadling

#include <iostream>
using namespace std;

void checkAge(int age) {
    if (age < 18)
        throw "Must be 18 to vote";
    cout << "Eligible to vote\n";
}

int main() {
    int age;
    cin >> age;
    try {
        checkAge(age);
    } catch (const char* e) {
        cout << e << '\n';
    }
    return 0;
}

// //Runtime Polymorphism
#include <iostream>
using namespace std;

class A {
public:
    virtual void one() {
        cout << "Base Class\n";
    }
};

class B : public A {
public:
    void one() override {
        cout << "Derived Class\n";
    }
};

void call(A& obj) {
    obj.one(); // Runtime polymorphism
}

int main() {
    A a;
    B b;
    call(a); // Calls A::one()
    call(b); // Calls B::one()
    return 0;
}

//Binary Unary vgre 

#include<iostream>
using namespace std;
class Weight{
    private : int kg;
    public : Weight(int x = 0) : kg(x) {}
    void print(){
        cout<<"Weight : "<<kg<<endl;
    }
    Weight& operator ++(){
        kg++;
        return *this;
    }
    Weight& operator ++(int){
        Weight temp = *this;
        kg++;
        return temp;
    }
};
int main(void){
    Weight obj;
    obj.print();
    ++obj;
    obj.print();
    obj++;
    obj.print();
}