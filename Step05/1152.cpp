// 1152.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	int cnt = 1;
	if (s[0] == ' ') cnt = 0;
	else if (s[0] != ' ') cnt = 1;
	for (int i = 1; i < s.length(); i++) {
		if (s[i - 1] == ' ') {
			cnt += 1;
		}
	}
	cout << cnt;
}