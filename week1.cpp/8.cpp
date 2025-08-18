#include <iostream>
using namespace std;

int main(){
    int input;
    string name;
    int n;
    int factorial = 1;
    bool exit = false;
    do{
    cout << "1. Greet\n";
    cout << "2. Calculate Factorial\n";
    cout << "0. Exit\n";
    cin >> input;
    switch (input){
    case 1:
        cout <<"What's your name?: \n";
        cin>>name;
        cout <<"Greetings "<<name<<", How may I help you?\n";
        break;
    case 2:
        cout << "Please enter a Number: ";
        cin>>n;
        for(int i=n; i>1; i--){
            factorial *= i;
        }
        cout <<"Factorial of "<<n<<" = "<<factorial<<endl;
        break;
    case 0:
        cout << "Exit\n";
        exit = true;
        break;
    default:
        cout << "Invalid Input\n";
        break;
    }
    }while (!exit);
    return 0;
}