// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
// string st = "This is Shubham Sattigeri.";
// ofstream out("sample.txt");
// out<< st;
// out.close();
// return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
// string st;
// ifstream in("sample.txt");
// getline(in, st);
// cout<<st<<endl;
// in.close();
// return 0;
// }

// #include<iostream>
// using namespace std;
// class Add{
// public : void add(int a, int b){
// cout<<(a+b)<<endl;
// }
// void add(int a, int b, int c){
// cout<<(a+b+c)<<endl;
// }
// void add(int a, double b, int c){
// cout<<(a+b+c)<<endl;
// }
// };
// int main(){
// Add a1;
// a1.add(5,4);
// a1.add(5,4,1);
// a1.add(5,4.2,7);
// return 0;
// }


// #include<iostream>
// using namespace std;
// template <typename T>
// class Class{
// public : void integer(T a, T b){
// cout<<a+b<<endl;}
// void dd(T a, T b){
// cout<<a+b<<endl;
// }
// };
// int main(){
// Class<double> a1;
// a1.integer(2,4);
// a1.dd(2.5,6.5);
// return 0;
// }

// #include<iostream>
// using namespace std;
// template<typename T>
// void add(T a, T b, T c){
// cout<<(a+b+c);
// }
// int main(void){
// add(1,2, 5);
// return 0;
// }

// #include <iostream>
// using namespace std;

// // Function to check voting eligibility
// void checkVotingEligibility(int age) {
//     if (age >= 18) {
//         throw "Eligible to vote.";
//     } else {
//         cout << "Not eligible to vote. Age is " << age << "." << endl;
//     }
// }
// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     try {
//         checkVotingEligibility(age);
//     } catch (const invalid_argument& e) {
//         cout<< "Error: "<< endl;
//         return 1;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int add(int a, int b){
// return a+b;
// }  
// int add(int a, int b, int c){
// return a+b+c;
// }
// int main(){
// cout<<"The sum of 3, 6 is : "<<add(3,6)<<endl;
// cout<<"The sum of 3, 6 is : "<<add(3,13,6)<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// class weight{
// private : int kg;
// public : weight(){
//     kg = 0;
// }
//     weight(int x){
//     kg = x;
// }
// void printl(){
//     cout<<"Weight is "<<kg<<endl;
// }
// void operator ++(){
//     kg++;
// }
// };
// int main(void){
//     weight obj;
//     obj.printl();
//     ++obj;
//     obj.printl();
// }
// #include<iostream>
// using namespace std;
// class Weight{
// private : int kg;
// public : void weight(){
// kg = 0;
// }
//     Weight(int x){
//     kg = x;
//     }
// void print(){
// cout<<"The Output is "<<kg<<endl;
// }
// void operator ++(){
// ++kg;}
// };
// int main(){
// Weight obj;
// ++obj;
// obj.print();
// return 0;
// }

// #include <iostream>
// using namespace std;
// class A {
// public:
//     int x;
//     A(int v) : x(v) {}
//     A operator+(A a) { 
//     return A(x + a.x); }
// };
// int main() {
//     A a(1), b(2);
//     A c = a + b;
//     cout << c.x << endl;
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(void){
//     string st = "Hi";
//     ofstream out("destination.txt");
//     out<<st;
//     ifstream src("destination.txt");
//     ofstream dest("destination2.txt");
//     dest<<st;
//     src.close();
//     dest.close();    
// }


// #include <iostream>
// using namespace std;
// class base
// {    public:
//     void show() // overridden function
//    {      
//   cout<<"base class"<<endl;       
//    }
// };
// class derived:public base
// {    public: 
//    void show() // overriding function
//    {    
//     cout<<"Derived class"<<endl;   
//    }
// };
// int main() 
// {  
//      derived d;
//      d.show();
//      d.base::show(); 
//      return 0;
// }

// #include <iostream> 
// using namespace std; 
// int main() 
// { 
// 	int x = 10; // integer x 
// 	char y = 'a'; // character c 
// 	x = x + y; 
// 	float z = x + 1.0; 
// 	cout << "x = " << x << endl 
// 		<< "y = " << y << endl 
// 		<< "z = " << z << endl; 

// 	return 0; 
// }

#include <iostream> 
using namespace std; 
int main() 
{ 
	double x = 1.2; 
	// Explicit conversion from double to int 
	int sum = (int)x + 1; 
	cout << "Sum = " << sum; 
	return 0; 
}
