#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  
  int cnt = 1;
  int Max = cnt;
  
  for(int i = 0; i < n-1; i++){
    if(s[i] != s[i+1]) cnt = 1;
    else cnt += 1;
    Max = max(cnt, Max);
  }

  cout << Max +1 << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}