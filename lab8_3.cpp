#include <iostream>
#include <string>
using namespace std;

int main() {
    int age, height = 0, bounty = 0;
    string character;
    cout << "Enter your age: ";
    cin >> age;
    if (age > 60) {
        character = "Brook";
    } else if (age > 25) {
        cout << "Enter your bounty: ";
        cin >> bounty;
        if (bounty > 500000000) {
            character = "Jinbe";
        } else {
            character = "Franky";
        }
    } else {
        cout << "Enter your height: ";
        cin >> height;

        if (height < 100) {
            character = "Chopper";
        } else if (height < 180) {
            character = "Usopp";
        } else {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty > 1100000000) {
                character = "Zoro";
            } else {
                character = "Sanji";
            }
        }
    }
    cout << "Your character = " << character;
    return 0;
}
