// 10871.cpp
#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;

	int A[10000] = { 0 };
	for (int i = 0; i < n; i++) cin >> A[i];

	for (int j = 0; j < n; j++) {
		if (x > A[j]) cout << A[j] << ' ';
	}
}