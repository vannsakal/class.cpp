#include <iostream>
using namespace std;

int main(){
    char grade;
    cout <<"Enter Grade: ";
    cin >> grade;
    switch (grade){
    case 'A':
        cout << "Excellent\n";
        break;
    case 'B':
        cout << "Good\n";
        break;
    case 'C':
        cout << "Fair\n";
        break;
    case 'F':
        cout << "Fail\n";
        break;
    default:
        cout << "Invalid Grade\n";
        break;
    }
    return 0;
}