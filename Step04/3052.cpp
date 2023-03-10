// 3052.cpp
#include <iostream>
using namespace std;

int main() {
	int a;
	int idx[43] = { 0 };

	for (int i = 0; i < 10; i++) {
		cin >> a;
		int remainder = a % 42;
		idx[remainder]++;
	}

	int cnt = 0;
	for (int i = 0; i < 43; i++) {
		if (idx[i] != 0)
			cnt++;
	}
	cout << cnt << '\n';
}