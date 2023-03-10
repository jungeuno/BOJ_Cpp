// 10810.cpp
#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int bucket[100] = { 0 };
	int i, j, K;
	for (int x = 0; x < m; x++) {
		cin >> i >> j >> K;
		for (int y = i; y <= j; y++) {
			bucket[y - 1] = K;
		}
	}
	for (int z = 0; z < n; z++) cout << bucket[z] << ' ';
}