// 1330.cpp
/*#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) cout << ">" << endl;
	else if (a < b) cout << "<" << endl;
	else cout << "==" << endl;
}*/

// 9498.cpp
/*#include <iostream>
using namespace std;

int main() {
	int score;
	cin >> score;
	if (score >= 90) cout << 'A' << endl;
	else if (score >= 80) cout << 'B' << endl;
	else if (score >= 70) cout << 'C' << endl;
	else if (score >= 60) cout << 'D' << endl;
	else cout << 'F' << endl;
}*/

// 2753.cpp
/*#include <iostream>
using namespace std;

int main() {
	int year;
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		cout << 1 << endl;
	}
	else cout << 0 << endl;
}*/

// 14681.cpp
/*#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (x * y > 0) {
		if (x > 0) cout << 1 << endl;
		else cout << 3 << endl;
	}
	else {
		if (x < 0) cout << 2 << endl;
		else cout << 4 << endl;
	}
}*/

// 2884.cpp
/*#include <iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
	if (m - 45 < 0) {
		h -= 1;
		m += 60;
	}
	if (h < 0) cout << 23 << ' ' << m - 45 << endl;
	else cout << h << ' ' << m - 45 << endl;
}*/

// 2525.cpp
/*#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	a += c / 60;
	b += c % 60;
	if (b >= 60) {
		a += 1;
		b -= 60;
	}
	if (a >= 24) a = a - 24;

	cout << a << ' ' << b << endl;
}*/

// 2480.cpp
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && a == c) cout << 10000 + a * 1000 << endl;
	else if (a == b) cout << 1000 + a * 100 << endl;
	else if (b == c) cout << 1000 + b * 100 << endl;
	else if (a == c) cout << 1000 + a * 100 << endl;
	else {
		int val1 = (b > c) ? b : c;
		int val2 = (a > val1) ? a : val1;
		cout << val2 * 100 << endl;
	}
}