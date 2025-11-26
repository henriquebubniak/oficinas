#include <bits/stdc++.h>
using namespace std;

int pdconstruir(long long h, long long x, int n, vector<int>& a){
    long long agua = 0;

    for (int i = 0; i < n; i++){
        if (a[i] < h){
            agua += (h - a[i]);
        }
    }
    return agua <= x;
}

int main(){
	
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);	
	
	int t;
	cin >> t;
	while (t--){
		int n, x;
		cin >> n >> x;
		vector<int> v(n);
		for (int i = 0; i<n; i++) cin >> v[i];

	long long l = 1, 
			  r = 2000000007;

	while (l < r){
    	long long m = (r+l+1)/2;

    	if (pdconstruir(m, x, n, v))
        	l = m;

		else
        	r = m - 1;
    	}

		cout << l << endl;
	}

	return 0;
}
