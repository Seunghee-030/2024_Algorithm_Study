// 1159 ³ó±¸°æ±â
#include<iostream>
#include<string>
#include<vector>
using namespace std;

string ResultString() {
    int num;
    vector<int> alphaNum(26, 0);
    string name;
    string result;

    cin >> num;

    for (int i = 0; i < num; ++i) {
        cin >> name;
        alphaNum[name[0] - 'a']++;
    }

    for (int i = 0; i < 26; ++i) {
        if (alphaNum[i] >= 5)
            result.push_back(i + 'a');
    }

    if (result.empty())
        result = "PREDAJA";

    return result;
}

int main() {
    cout << ResultString() << "\n";
    return 0;
}
