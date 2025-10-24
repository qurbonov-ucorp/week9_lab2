#include <iostream>
using namespace std;
bool isPrime(int number, int i=2) {
    if (number <= 1) {
        return false;
    }
    if (i*i>number) {
        return true;
    }
    if (number%i==0) {
        return false;

    }
    return isPrime(number, i+1);

}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isPrime(number)) {
        cout << number << " is a prime number";
    }
    else {
        cout << number << " is not a prime number";
    }
    return 0;
}