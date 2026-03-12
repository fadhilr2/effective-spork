#include "bits/stdc++.h"
using namespace std;
#define int long long

vector<int> psum(const vector<int> &arr) {
 vector<int> psums(arr.size() + 1);
 for (int i = 0; i < arr.size(); i++) { psums[i + 1] = psums[i] + arr[i]; }
 return psums;
}

void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto& e : a) cin >> e;

  sort(a.begin(), a.end(), [](int x, int y) {
    return x % 2 < y % 2;
  });

  int ans = 0;
  int i = 0;
  for(int i = 0; i < n-1; i++){
    for(int j = i+1; j < n; j++){
      ans += __gcd(a[i], 2*a[j]) > 1;
    }
  }

  cout << ans << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}