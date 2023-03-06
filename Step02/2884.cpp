// 2884.cpp
#include <iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
	if (m - 45 < 0) {
		h -= 1;
		m += 60;
	}
	if (h < 0) cout << 23 << ' ' << m - 45 << endl;
	else cout << h << ' ' << m - 45 << endl;
}