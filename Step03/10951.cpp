// 10951.cpp
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b) {
		cout << a + b << endl;
	}
}

/*
#include <iostream>
using namespace std;

int main(void) {
    int a, b;

    while (true) {
        cin >> a >> b;
        if (cin.eof() == true) {
            break;
        }
        cout << a + b << endl;
    }
}
*/