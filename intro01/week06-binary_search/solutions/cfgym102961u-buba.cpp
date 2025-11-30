#include <bits/stdc++.h>
using namespace std;

int t, n;
vector<int> k;

bool check(long long x) {
    long long products = 0;
    for (int i = 0; i < n; i++) {
        products += x / k[i];
    }
    return products >= t;
};
int main() {
    cin >> n >> t;
    k = vector<int>(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    long long l = 1;
    long long r = (long long)*min_element(k.begin(), k.end())*t;
    while (l <= r) {
        long long m = (r + l) / 2;
        if (check(m)) {
            r = m-1;
        } else {
            l = m+1;
        }
    }
    cout << l << "\n";
}
