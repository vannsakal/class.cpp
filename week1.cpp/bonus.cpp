#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the positive number: ";
    cin >> num;
    if(num > 0){
        for(int i = 0; i <= num; i++){
            bool isPrime = true;
            if (i < 2) {
                isPrime = false;
            } else {
                for (int j = 2; j * j <= i; j++) {
                    if (i % j == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
            if (isPrime) {
                cout << " " << i;
            }
        }
    }else{
        cout << "The number is not positive number\n";
    }
    return 0;
}