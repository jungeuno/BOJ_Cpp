// 11718.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
	while (1) {
		string s;
		getline(cin, s);
		cout << s << '\n';
		if (cin.eof() == true) break;
	}
}