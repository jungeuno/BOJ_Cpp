// 5622.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
	int dial[10][4] = { 0 };
	int cnt = 0;
	for (int i = 1; i < 9; i++) {
		for (int j = 0; j < 3; j++) {
			dial[i][j] = 65 + cnt++;
			if (i == 6 && j == 2) dial[i][3] = 65 + cnt++; // 다이얼 '7' 에는 4개 알파벳 저장
			else if (i == 8 && j == 2) dial[i][3] = 65 + cnt++; // 다이얼 '9'에는 4개 알파벳 저장
		}
	}

	string s;
	cin >> s;
	int time = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < s.length(); k++) {
				if (dial[i][j] == (int)s[k]) time += (i + 2);
			}
		}
	}
	cout << time << '\n';
}