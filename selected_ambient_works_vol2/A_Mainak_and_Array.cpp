#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto& e : a) cin >> e;

  int s1 = 0;
  for(int i = 0; i < n-1; i++){
    s1 = max(s1, (a[n-1]-a[i]));
  }
  int s2 = 0;
  for(int i = 1; i < n; i++){
    s2 = max(s2, (a[i]-a[0]));
  }
  int s3 = 0;
  for(int i = 0; i <n-1; i++){
    s3 = max(s3, (a[i]-a[i+1]));
  }

  int s4 = a[n-1]-a[0];

  cout << max({s1, s2, s3, s4}) << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}