// 2588.cpp
#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int b100 = b / 100;
	int b10 = (b / 10) % 10;
	int b1 = b % 10;
	cout << a * b1 << endl;
	cout << a * b10 << endl;
	cout << a * b100 << endl;
	cout << a * b << endl;
}