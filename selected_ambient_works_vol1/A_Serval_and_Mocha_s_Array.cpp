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
  vector<int> a(n);
  
  for(auto& e : a) cin >> e;

  //if there is an i, such that gcd(a_i, a_i+1) < 2, then its possible
  for(int i = 0; i < n-1; i++){
    for(int j = 1; j < n; j++){
      if(__gcd(a[i], a[j]) <= 2){
        cout << "Yes\n";
        return;
      }
    }
  }

  cout << "No\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}