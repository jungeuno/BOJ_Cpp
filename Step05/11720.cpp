// 11720.cpp
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	string value;;
	cin >> value;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += value[i] - '0';
	}
	cout << sum << '\n';
}