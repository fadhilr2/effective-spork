#include "bits/stdc++.h"
using namespace std;
#define int long long

vector<int> psum(const vector<int> &arr) {
 vector<int> psums(arr.size() + 1);
 for (int i = 0; i < arr.size(); i++) { psums[i + 1] = psums[i] + arr[i]; }
 return psums;
}

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;

  int i = 0;
  int j = n-1;
  int cnt = 0;
  while(s[i] != s[j] && i < j){
    cnt += 1  ;
    i += 1;
    j -= 1;
  }
  
  cout << n - (cnt*2) << "\n";
  
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}