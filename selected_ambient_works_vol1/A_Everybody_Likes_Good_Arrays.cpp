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

  int ops = 0;
  for(int i = 0; i < n-1; i++){
    int j =i+1;
    while(j < n && (a[i] % 2) == (a[j] % 2)){
        j += 1;
        ops += 1;
      }
    j -= 1;
    i = j;
  }

  cout << ops << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}