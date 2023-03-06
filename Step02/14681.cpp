// 14681.cpp
#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (x * y > 0) {
		if (x > 0) cout << 1 << endl;
		else cout << 3 << endl;
	}
	else {
		if (x < 0) cout << 2 << endl;
		else cout << 4 << endl;
	}
