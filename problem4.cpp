#include <iostream>
using namespace std;
int reverse(int n,int rev) {
    if (n==0) {
        return rev;
    }
    return reverse(n/10,rev*10+n%10);
}
int main() {
    int n,rev=0;
    cin>>n;
    cout<<reverse(n,rev);
    return 0;
}