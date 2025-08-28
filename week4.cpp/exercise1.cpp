#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename: ";
    getline(cin, filename);

    // 1. Write initial entries
    ofstream outFile(filename);
    if (!outFile.is_open()) {
        cerr << "Cannot open file for writing\n";
        return 1;
    }
    // TODO: write 5 lines "Name score"
    outFile << "Meng 99" <<endl;
    outFile << "Vit 100" <<endl;
    outFile << "Pav 95" <<endl;
    outFile << "Theara 98" <<endl;
    outFile << "Sakal 67" <<endl;
    outFile.close();

    // 2. Read and display
    ifstream inFile(filename);
    if (!inFile.is_open()) {
        cerr << "Cannot open file for reading\n";
        return 1;
    }
    // TODO: read loop and print
    string name;
    int score;
    while (inFile >> name >> score) {
        cout << name << " " << score << endl;
    }
    inFile.close();

    return 0;
}
