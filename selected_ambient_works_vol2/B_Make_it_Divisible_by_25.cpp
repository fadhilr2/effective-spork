#include "bits/stdc++.h"

using namespace std;
#define int long long

string substr[] = {"00", "25", "50", "75"};

void solve(){

	int ans = 2e9;

	int n;
	cin >> n;

	for(auto e : substr){
		int ops = 0;
		//find last digit of e
		string num = to_string(n);

		int j = num.length()-1;

		while(j){
			if(num[j] == e[1]){
				j -= 1;
				break;
			}
			j -= 1;
			ops += 1;
		}

		while(j){
			if(num[j] == e[0]){
				break;
			}

			j -= 1;
			ops += 1;
		}

		ans = min(ops, ans);

	}

	cout << ans << "\n";
	
}


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}