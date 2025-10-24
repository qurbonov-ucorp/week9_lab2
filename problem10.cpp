#include <iostream>
using namespace std;
void printBinary(int num) {
    if (num == 0) return;
    printBinary(num / 2);
    cout << num % 2;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Binary of " << number << " is: ";
    if (number == 0)
        cout << "0";
    else
        printBinary(number);
    return 0;
}