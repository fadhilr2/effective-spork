#include "bits/stdc++.h"
using namespace std;
#define int long long

vector<int> psum(const vector<int> &arr) {
 vector<int> psums(arr.size() + 1);
 for (int i = 0; i < arr.size(); i++) { psums[i + 1] = psums[i] + arr[i]; }
 return psums;
}

void solve(){
  string s;
  cin >> s;

  int n =s.length();

  int a = 0;
  int b = 0;
  for(auto e : s){
    if(e == '0') a += 1;
    else b += 1;
  }

  if(min(a,b) % 2 != 0) cout << "DA\n";
  else cout << "NET\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}