#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;

  int left = 0, right = n-1;

  int cnt = 0;
  while(left < right &&(s[left] != s[right])){
    cnt += 1;
    left += 1;
    right -= 1;
  }

  cout << n - (2*cnt) << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}