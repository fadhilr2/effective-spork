#include "bits/stdc++.h"
using namespace std;

void solve(){
  int n;
  cin >> n;

  vector<long long> a(n);
  for(auto& e : a) cin >> e;

  if(a[0] != 1) cout << "NO\n";
  else cout << "YES\n";
}

int main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}