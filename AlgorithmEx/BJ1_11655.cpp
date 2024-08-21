#include<iostream>
#include<string>
#include<vector>
#include<cctype> // islower , isupper, isdigit
using namespace std;

int main() {
    string result;
    string s;
    getline(cin, s);

    for (char c : s) {
        if (isdigit(c)) {
            result.push_back(c);
        }
        else if (islower(c)) {
            result.push_back((c - 'a' + 13) % 26 + 'a');
        }
        else if (isupper(c)) {
            result.push_back((c - 'A' + 13) % 26 + 'A');
        }
        else {
            result.push_back(c);
        }
    }

    cout << result << endl;

    return 0;
}
