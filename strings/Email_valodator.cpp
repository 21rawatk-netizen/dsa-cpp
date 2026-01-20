
#include <iostream>
using namespace std;

bool isValidEmail(string email) {
    int atPos = email.find('@');
    int dotPos = email.find('.', atPos);

    if (atPos == string::npos || dotPos == string::npos)
        return false;

    if (atPos == 0 || dotPos == email.length() - 1)
        return false;

    return true;
}

int main() {
    string email;
    cout << "Enter Email: ";
    cin >> email;

    if (isValidEmail(email))
        cout << "Valid Email ✅\n";
    else
        cout << "Invalid Email ❌\n";

    return 0;
}
