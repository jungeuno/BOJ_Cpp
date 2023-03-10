// 10818.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, value;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; i++) {
		cin >> value;
		v.push_back(value);
	}

	int max = v[0], min = v[0];
	for (int i = 0; i < n; i++) {
		if (max < v[i]) {
			max = v[i];
		}
		else if (min > v[i]) {
			min = v[i];
		}
	}
	cout << min << ' ' << max;
}