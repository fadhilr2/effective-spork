#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for(auto& e : a) cin >> e;

  if(n == 1){
    cout << 0 << "\n";
    return;
  }

  sort(a.begin(), a.end());

  int Max = 0;
  int cnt = 1;
  for(int i = 0; i  < n-1; i++){
    if((a[i+1]-a[i]) > k){
      cnt = 1;
    }else cnt += 1;
    Max=max(cnt, Max);

  }

  cout << n - Max << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}