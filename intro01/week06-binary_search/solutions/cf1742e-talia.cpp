#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        vector<int> pref_max(n+1, 0);
        for(int i = 1; i < n+1; ++i) pref_max[i] = max(pref_max[i-1], a[i-1]);
        vector<ll> pref_sum(n+1, 0);
        for(int i = 1; i < n+1; ++i) pref_sum[i] = pref_sum[i-1]+a[i-1];
        while(q--) {
            int k;
            cin >> k;
            int r = distance(pref_max.begin(),
                             upper_bound(pref_max.begin(), pref_max.end(), k));
            cout << pref_sum[r-1] << (q > 0 ? ' ' : '\n');
        }
    }
    return 0;
}
