#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto& e: a) cin >> e;

  vector<int> k;
  for(int i = 0; i < n; i++){
    k.push_back(abs(a[i]-(i+1)));
  }

  int gcd = k.front();
  for(auto e : k){
    gcd = __gcd(gcd, e);
  }

  cout << gcd << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}