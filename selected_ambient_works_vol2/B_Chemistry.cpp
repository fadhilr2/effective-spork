#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  map<char, int> freq = {};

  for(auto e : s) freq[e] += 1;

  //characters with odd frequency
  int oddFreq = 0;
  for(auto e : freq) if(e.second % 2 != 0) oddFreq += 1;
  
  oddFreq -= k;
  if(oddFreq <= 1){
    cout << "YES\n";
  } else{
    cout << "NO\n";
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
