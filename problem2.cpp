#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int num_students;
    cout<<"Enter the number of students (1-100):"<<endl;
    cin>>num_students;
    if (num_students < 1 || num_students > 100) {
        cout<<"Invalid Input! Program exit!"<<endl;
        return 0;
    }
    int grade;
    int sum = 0;
    for (int i = 0; i < num_students; i++) {
        cout<<"Enter grade for student "<<i+1<<"(1 to 100):"<<endl;
        cin>>grade;
        if (grade < 1 || grade > 100) {
            cout<<"Invalid Input! Enter again!"<<endl;
            i--;
            continue;
        }
        sum += grade;
    }
    double average = 1.0*sum / num_students;
    cout<<fixed<<setprecision(2);
    cout<<"Average grade is "<<average<<endl;
    return 0;
}