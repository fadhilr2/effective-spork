#include "bits/stdc++.h"
using namespace std;
#define int long long

vector<int> a;


void solve(){
  int n;
  cin >> n;

  int ans = 0;
  for(auto e : a){
    if(e > n) break;
    ans += 1;
  }

  cout << ans << "\n";

}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 for(int i =1; i < 1e7; i++){
  int cntDigit = 0;
  int num = i;
  while(num){
    if((num % 10) != 0) cntDigit += 1;
    num /= 10;
  }
  if(cntDigit == 1) a.push_back(i);
 }
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}