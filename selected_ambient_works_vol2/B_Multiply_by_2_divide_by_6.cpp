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

  int cnt2 = 0, cnt3 = 0;

  while(n % 2 == 0){
    cnt2 += 1;
    n /= 2;
  }

  while(n % 3 == 0){
    cnt3 += 1;
    n /= 3;
  }

  if(n == 1 && cnt2 <= cnt3){
    cout << (cnt3-cnt2) +cnt3 << "\n";
  } else{
    cout << -1 << "\n";
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