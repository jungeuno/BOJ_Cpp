// 25304.cpp
#include <iostream>
using namespace std;

int main() {
	int x, n, a, b;
	cin >> x >> n;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		sum += a * b;
	}
	if (x == sum) cout << "Yes\n";
	else cout << "No\n";
}