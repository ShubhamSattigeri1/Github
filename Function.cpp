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