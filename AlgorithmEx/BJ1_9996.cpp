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

    // ���Ͽ��� '*'�� ��ġ�� ã�´�
    int starPos = pattern.find('*');
    string prefix = pattern.substr(0, starPos);  // '*' ������ ���ڿ�
    string suffix = pattern.substr(starPos + 1); // '*' ������ ���ڿ�

    for (int i = 0; i < num; ++i) {
        cin >> tmp;

        // ���� ���̺��� �Է� ���ڿ��� ª���� ������ 'NE'
        if (tmp.size() < prefix.size() + suffix.size()) {
            result.push_back("NE");
        }
        else {
            // ���λ�� ���̻縦 ��
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
