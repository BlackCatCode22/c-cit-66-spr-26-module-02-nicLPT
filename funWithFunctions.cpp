#include <iostream>
using namespace std;
int getAnIntFromTheUser();
void compareTwoInts(int a, int b);
int sumTwoInts(int a, int b);
int main() {
    cout << "adding integers" << endl;
    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();
    compareTwoInts(num1, num2);
    int total = sumTwoInts(num1, num2);
    cout << "the sum of " << num1 << " and " << num2 << " is: " << total << endl;
    return 0;}
int getAnIntFromTheUser() {
    int input;
    cout << "enter an integer: ";
    cin >> input;
    return input;}
void compareTwoInts(int a, int b) {
    if (a>b) {cout << a << " is greater than " << b << endl;
    } else if (b>a) {cout << b << " is greater than " << a << endl;
    } else {cout << "the integers are equal to each other" << endl;
    } }
int sumTwoInts(int a, int b) {
    return a + b;}
