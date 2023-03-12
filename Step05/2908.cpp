// 2908.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
	int rev[2] = { 0 };

	for (int i = 0; i < 2; i++) {
		string s;
		cin >> s;
		int tmp;
		tmp = s[0];
		s[0] = s[2];
		s[2] = tmp;
		rev[i] = stoi(s);
	}
	if (rev[0] > rev[1]) cout << rev[0];
	else cout << rev[1];
}