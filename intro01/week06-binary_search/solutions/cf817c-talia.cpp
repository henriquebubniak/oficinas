#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int sum_dig(ll a) {
    int sum = 0;
    while(a > 0) {
        sum += a%10;
        a /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, s;
    cin >> n >> s;
    ll l = 1, r = n+1;
    while(l < r) {
        ll m = (l+r)/2;
        if(m-sum_dig(m) >= s) {
            r = m;
        } else {
            l = m+1;
        }
    }
    cout << n+1-r << '\n';
    return 0;
}
