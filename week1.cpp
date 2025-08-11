#include <iostream>
using namespace std;
// 1.
// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

// 2.
// int main(){
//     int studentCount = 30;
//     float temperature = 36.6;
//     char grade = 'A';
//     bool passed = true;
//     cout << studentCount << endl;
//     cout << temperature << endl;
//     cout << grade << endl;
//     cout << passed << endl;
// }

// 3.
// int main(){
//     int num1, num2;
//     cout << "Enter 2 numbers:" << endl;
//     cin >> num1;
//     cin >> num2;
//     int sum = num1 + num2;
//     cout << " Your Sum is: " << sum << endl;
// }

// 4.
// int main(){
//     int studentScore = 69;
//     int StudentRecord = 67;
//     int student_score = 82;
//     int MAX_BUFFER_SCORE = 100;
//     cout << "studentScore " << studentScore << endl;
//     cout << "StudentRecord " << StudentRecord << endl; 
//     cout << "student_score " << student_score << endl;
//     cout << "MAX_BUFFER_SCORE " << MAX_BUFFER_SCORE<< endl;
// }

// 5.
// int main(){
//     int number;
//     cout <<"Enter a number: "<<endl;
//     cin >> number;
//     if(number%2 == 0){
//         cout <<number<<" is an Even number"<< endl;
//     }else{
//         cout <<number<<" is an Odd number"<< endl;
//     }
// }

// 6.
// int main(){
//     char grade;
//     cin >> grade;
//     switch (grade){
//     case 'A':
//         cout << "Excellent\n";
//         break;
//     case 'B':
//         cout << "Good\n";
//         break;
//     case 'C':
//         cout << "Fair\n";
//         break;
//     case 'F':
//         cout << "Fail\n";
//         break;
//     default:
//         cout << "Invalid Grade\n";
//         break;
//     }
//     return 0;
// }

// 7.
// int main(){
//     for(int i = 5; i<=50; i++){
//         if(i%5 == 0){
//             cout<< " " << i;
//         }
//     }
// }

// 8.
// int main(){
//     int input;
//     string name;
//     int n;
//     int factorial = 1;
//     bool exit = false;
//     do{
//     cout << "1. Greet\n";
//     cout << "2. Calculate Factorial\n";
//     cout << "0. Exit\n";
//     cin >> input;
//     switch (input){
//     case 1:
//         cout <<"What's your name?: \n";
//         cin>>name;
//         cout <<"Greetings "<<name<<", How may I help you?\n";
//         break;
//     case 2:
//         cout << "Please enter a Number: ";
//         cin>>n;
//         for(int i=n; i>1; i--){
//             factorial *= i;
//         }
//         cout <<"Factorial of "<<n<<" = "<<factorial<<endl;
//         break;
//     case 0:
//         cout << "Exit\n";
//         exit = true;
//         break;
//     default:
//         cout << "Invalid Input\n";
//         break;
//     }
//     }while (!exit);
//     return 0;
// }

// bonus.
// int main(){
//     int num;
//     cout << "Enter the positive number: ";
//     cin >> num;
//     if(num > 0){
//         for(int i = 0; i <= num; i++){
//             bool isPrime = true;
//             if (i < 2) {
//                 isPrime = false;
//             } else {
//                 for (int j = 2; j * j <= i; j++) {
//                     if (i % j == 0) {
//                         isPrime = false;
//                         break;
//                     }
//                 }
//             }
//             if (isPrime) {
//                 cout << " " << i;
//             }
//         }
//     }else{
//         cout << "The number is not positive number\n";
//     }
//     return 0;
// }
