#include <iostream>
using namespace std;

int function(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }
    return function(n - 1, r - 1) + function(n - 1, r);
}

int main() {
    int n, r;
    cout << "Enter a number: ";
    cin >> n >> r;
    cout << function(n, r) << endl;
    return 0;
}