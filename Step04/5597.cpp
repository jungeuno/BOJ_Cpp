// 5597.cpp
#include <iostream>
using namespace std;

int main() {
	int students[31] = { 0 };
	for (int i = 0; i < 28; i++) {
		int n;
		cin >> n;
		students[n] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (students[i] == 0) cout << i << '\n';
	}
}