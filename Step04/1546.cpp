// 1546.cpp
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	double score[1000] = { 0 };
	int max = 0;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (max < score[i]) {
			int tmp;
			tmp = score[i];
			score[i] = max;
			max = tmp;
		}
	}

	double sum = 0;
	for (int i = 0; i < n; i++) {
		score[i] = score[i] / max * 100;
		cout << score[i] << '\n';
	}
	double avg = sum / n;
	cout << avg << '\n';
}