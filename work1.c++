#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> number;

    while(number != 0) {
        digit = number % 10;   // Extract last digit
        sum = sum + digit;     // Add digit to sum
        number = number / 10;  // Remove last digit
    }

    cout << "Sum of digits = " << sum;

    return 0;
}