#include "bits/stdc++.h"
using namespace std;

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;

  long long cnt = 0;
  for(auto e : s){
    if(e == '.') cnt += 1;
  }

  for(int i = 1; i < n-1; i++){
    int length = 0;
    if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){
      cout << 2 << "\n";
      return;
    }
  }

  cout << cnt << "\n";
}

int main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}