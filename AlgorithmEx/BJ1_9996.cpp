#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    vector<string> result;
    int num;
    string pattern;
    string tmp;

    cin >> num;
    cin >> pattern;

    // 패턴에서 '*'의 위치를 찾는다
    int starPos = pattern.find('*');
    string prefix = pattern.substr(0, starPos);  // '*' 이전의 문자열
    string suffix = pattern.substr(starPos + 1); // '*' 이후의 문자열

    for (int i = 0; i < num; ++i) {
        cin >> tmp;

        // 패턴 길이보다 입력 문자열이 짧으면 무조건 'NE'
        if (tmp.size() < prefix.size() + suffix.size()) {
            result.push_back("NE");
        }
        else {
            // 접두사와 접미사를 비교
            if (tmp.substr(0, prefix.size()) == prefix &&
                tmp.substr(tmp.size() - suffix.size()) == suffix) {
                result.push_back("DA");
            }
            else {
                result.push_back("NE");
            }
        }
    }

    for (const string& s : result) {
        cout << s << "\n";
    }

    return 0;
}
