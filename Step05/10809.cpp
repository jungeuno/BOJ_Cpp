// 10809.cpp
#include <iostream>
using namespace std;
// ���ĺ� ������ 26�� 0~26 ���� ����
int main() {
	string s;
	cin >> s;

	int alpha[26] = { -1 };
	int idx = 0;
	for (int i = 0; i < 26; i++) alpha[i] = -1;
	
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (alpha[j] != -1) continue;
			if (j + 97 == (int)s[i]) {
				alpha[j] = i;
				continue;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << ' ';
	}
}