#include <iostream>
using namespace std;

bool strongPassword(string pass) {
    if (pass.length() < 8) return false;

    bool upper = false, lower = false, digit = false, special = false;

    for (char ch : pass) {
        if (ch >= 'A' && ch <= 'Z') upper = true;
        else if (ch >= 'a' && ch <= 'z') lower = true;
        else if (ch >= '0' && ch <= '9') digit = true;
        else special = true;
    }

    return upper && lower && digit && special;
}

int main() {
    string password;
    cout << "Enter Password: ";
    cin >> password;

    if (strongPassword(password))
        cout << "Strong Password ✅\n";
    else
        cout << "Weak Password ❌\n";

    return 0;
}
