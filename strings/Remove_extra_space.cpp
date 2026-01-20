#include <iostream>
using namespace std;

string cleanSpaces(string s) {
    string ans = "";
    int i = 0;

    while (i < s.length() && s[i] == ' ') i++;

    while (i < s.length()) {
        if (s[i] != ' ') {
            ans += s[i];
        } else {
            ans += ' ';
            while (i < s.length() && s[i] == ' ') i++;
            continue;
        }
        i++;
    }

    if (!ans.empty() && ans.back() == ' ')
        ans.pop_back();

    return ans;
}

int main() {
    string s;
    cout << "Enter Sentence: ";
    getline(cin, s);

    cout << "Cleaned: " << cleanSpaces(s) << endl;
    return 0;
}
