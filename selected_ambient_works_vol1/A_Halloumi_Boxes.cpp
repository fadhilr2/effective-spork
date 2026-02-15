#include "bits/stdc++.h"
using namespace std;

void solve(){
  //if k >= 2 OR array is already sorted ascending its valid
  //because bubble sort require two element to be swapped
  int n, k;
  cin >> n >> k;

  vector<long long> a(n);
  for(auto& e : a) cin >> e;



  if(k >= 2 || is_sorted(a.begin(), a.end())) cout << "YES\n";
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