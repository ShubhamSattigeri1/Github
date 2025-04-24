#include <iostream>
using namespace std;
template <typename T>
class Adder {
public:
    T add(T a, T b) {
        return a + b;
    }
};

int main() {
    Adder<int> intAdder;
    cout << "Sum of 5 and 10 (int): " << intAdder.add(5, 10) << endl;

    Adder<double> doubleAdder;
    cout << "Sum of 5.5 and 10.3 (double): " << doubleAdder.add(5.5, 10.3) << endl;

    return 0;
}

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of 5 and 10 (int): " << add<int>(5, 10) << endl;
    cout << "Sum of 5.5 and 10.3 (double): " << add<double>(5.5, 10.3) << endl;

    return 0;
}


