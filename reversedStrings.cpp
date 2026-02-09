#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    string output;
    cin >> input;
    reverse(input.begin(), input.end());
    output=input;
    cout << output << endl;
    return 0;
}
