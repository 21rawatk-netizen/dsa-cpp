#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    string a, b;
    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;

    if (isAnagram(a, b))
        cout << "Anagram ✅\n";
    else
        cout << "Not Anagram ❌\n";

    return 0;
}
