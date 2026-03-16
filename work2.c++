#include <iostream>
using namespace std;

class Palindrome {
    int number, original, reverse = 0, digit;

public:
    void getNumber() {
        cout << "Enter a number: ";
        cin >> number;
        original = number;
    }

    void checkPalindrome() {
        while(number != 0) {
            digit = number % 10;
            reverse = reverse * 10 + digit;
            number = number / 10;
        }

        if(original == reverse)
            cout << "The number is a Palindrome.";
        else
            cout << "The number is NOT a Palindrome.";
    }
};

int main() {
    Palindrome obj;
    obj.getNumber();
    obj.checkPalindrome();

    return 0;
}