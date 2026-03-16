#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, original, remainder, result = 0, n = 0;

    cout << "Enter a number: ";
    cin >> number;

    original = number;

    // Count number of digits
    while(original != 0) {
        original /= 10;
        ++n;
    }

    original = number;

    // Calculate Armstrong sum
    while(original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if(result == number)
        cout << "The number is an Armstrong number.";
    else
        cout << "The number is NOT an Armstrong number.";

    return 0;
}