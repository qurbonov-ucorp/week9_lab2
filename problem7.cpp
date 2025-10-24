#include <iostream>
using namespace std;
int num_digits(int n) {
    if(n==0) {
        return 0;
    }else {
        return 1+num_digits(n/10);
    }
}
int main() {
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    cout<<num_digits(num)<<endl;
    return 0;
}