// 10813.cpp
#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int bucket[100] = { 0 };
	for (int x = 0; x < n; x++) {
		bucket[x] = x + 1;
	}

	for (int y = 0; y < m; y++) {
		int i, j, temp;
		cin >> i >> j;
		temp = bucket[i - 1];
		bucket[i - 1] = bucket[j - 1];
		bucket[j - 1] = temp;
	}

	for (int z = 0; z < n; z++) {
		cout << bucket[z] << ' ';
	}
}