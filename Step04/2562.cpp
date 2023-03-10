// 2562.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	vector<int> v;

	for (int i = 0; i < 9; i++) {
		cin >> n;
		v.push_back(n);
	}

	int max = v[0];
	for (int i = 1; i < 9; i++) {
		if (max < v[i]) max = v[i];
	}
	int idx = find(v.begin(), v.end(), max) - v.begin();
	cout << max << '\n';
	cout << idx + 1 << '\n';
}