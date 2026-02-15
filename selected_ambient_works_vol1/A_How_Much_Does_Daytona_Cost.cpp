#include "bits/stdc++.h"
using namespace std;

void solve(){
  int n, k;
  cin >> n >> k;

  vector<long long> a(n);
  for(auto& e : a) cin >> e;

  auto findK = find(a.begin(), a.end(), k);
  if(findK != a.end())cout << "YES\n";
  else cout << "NO\n";
}

int main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}