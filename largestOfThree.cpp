#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    int largest;
    cout << "Enter three integers";
    cin >> a >> b >> c;
    if (a >= b) {
        if (a >= c) {largest = a;
        } else {largest = c;}
    } else {
        if (b >= c) {largest = b;
        } else {largest = c;}
    }
    cout << "The largest of the three integers is " << largest << endl;
    return 0;
}