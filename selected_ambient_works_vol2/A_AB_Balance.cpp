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

  if(s.length() == 1 || s.front() == s.back()){
    cout << s << "\n";
    return;
  }

  if(s.front() == 'a'){
    s.back() = 'a';
    cout << s << "\n";
  } else{
    s.back() = 'b';
    cout << s << "\n";
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