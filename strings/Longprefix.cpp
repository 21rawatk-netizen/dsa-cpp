#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string> strs) {
    if (strs.empty()) return "";

    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[strs.size() - 1];

    string ans = "";
    for (int i = 0; i < min(first.length(), last.length()); i++) {
        if (first[i] == last[i])
            ans += first[i];
        else
            break;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++)
        cin >> strs[i];

    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}
