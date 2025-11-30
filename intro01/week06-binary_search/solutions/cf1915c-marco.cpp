#include <bits/stdc++.h>
using namespace std;

int main(){
	
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);	
	
	int t;
	cin >> t;
	while (t--){
		long long n, 
				  squares = 0,
				  solved = 0;
		cin >> n;
		for (int i = 0; i < n; i++){
			int a;
			cin >> a;
			squares += a;
		}

		//lógica para busca binária --> avaliar se 'squares'
		//é quadrado perfeito ou não 
		
		long long l = 1,
				  r = 2000000000; //limite para não dar integer overflow

		while (l <= r){
			long long m = (l+r)/2;
			if (m*m == squares){
				cout << "YES" << '\n';
				solved = 1;
				break;
			}

			else if (m*m < squares)
				l = m+1;

			else
				r = m-1;

			}
		
		if (solved == 0) cout << "NO" << '\n';

		}

	return 0;

	}
