// 2480.cpp
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && a == c) cout << 10000 + a * 1000 << endl;
	else if (a == b) cout << 1000 + a * 100 << endl;
	else if (b == c) cout << 1000 + b * 100 << endl;
	else if (a == c) cout << 1000 + a * 100 << endl;
	else {
		int val1 = (b > c) ? b : c;
		int val2 = (a > val1) ? a : val1;
		cout << val2 * 100 << endl;
	}
}