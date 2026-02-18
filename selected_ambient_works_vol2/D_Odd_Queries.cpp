#include "bits/stdc++.h"
using namespace std;
#define int long long

vector<int> psum(const vector<int> &arr) {
	vector<int> psums(arr.size() + 1);
	for (int i = 0; i < arr.size(); i++) { psums[i + 1] = psums[i] + arr[i]; }
	return psums;
}

void solve(){
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for(auto& e : a) cin >> e;
  vector<int> prefix = psum(a);

  while(q){
    int l, r, k;
    cin >> l >> r >> k;
    //sum of r-l+1 k 
    int sumK = k*((r-l)+1);
    int sumLtoR = prefix[r]-prefix[l-1];
    if((prefix.back()-sumLtoR-sumK) % 2 != 0){
      cout << "YES\n";
    } else{
      cout << "NO\n";
    }
    q -= 1;
  }
  
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}