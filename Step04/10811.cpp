// 10811.cpp
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> bucket;
    for (int x = 0; x < n; x++) {
        bucket.push_back(x + 1);
    }

    for (int x = 0; x < m; x++) {
        int i, j;
        cin >> i >> j;
        reverse(&bucket[i - 1], &bucket[j]);
    }
    for (int x = 0; x < n; x++) cout << bucket[x] << ' ';
}