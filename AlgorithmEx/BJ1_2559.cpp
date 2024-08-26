#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int psum[100001];
	int result = -1000000;
	int num;
	int tmp;
	int series;

	cin >> num;
	cin >> series;
	psum[0] = 0;
	for (int i = 1; i < num; ++i) {
		cin >> tmp;
		psum[i] = psum[i - 1] + tmp;
	}

	for (int j = series; j <= num; ++j) {
		result = max(result, psum[j] = psum[j - series]);
	}

	cout << result << "\n";

	return 0;
}
