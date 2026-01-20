#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

int main() {
    string text;
    cout << "Enter paragraph: ";
    getline(cin, text);

    string word;
    stringstream ss(text);
    unordered_map<string, int> freq;

    while (ss >> word) {
        for (char &c : word) c = tolower(c); // lowercase
        freq[word]++;
    }

    string mostWord = "";
    int maxCount = 0;

    for (auto x : freq) {
        if (x.second > maxCount) {
            maxCount = x.second;
            mostWord = x.first;
        }
    }

    cout << "Most frequent word: " << mostWord << endl;
    cout << "Count: " << maxCount << endl;

    return 0;
}
