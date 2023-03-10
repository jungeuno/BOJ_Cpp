// 10807.cpp
#include <iostream>
using namespace std;

int main() {
	int n, v;
	cin >> n;

	int num[100] = {0};
	for (int i = 0; i < n; i++) cin >> num[i];
	
	cin >> v;
	int cnt = 0;
	for (int j = 0; j < n; j++) {
		if (num[j] == v) cnt += 1;
	}
	cout << cnt << '\n';
}