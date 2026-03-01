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
  int zeros = 0;
  for(auto& e : a){
    cin >> e;
    if(e == 0) zeros += 1;
  }

  if(zeros == n){
    cout << 0 <<"\n";
    return;
  }
  int left = 0;
  int right = n-1;
  while(left < n && a[left] == 0){
    left += 1;
  }

  while(right >= 0 && a[right] == 0){
    right -= 1;
  }

  for(; left < right; left++){
    if(a[left] == 0){
      cout << 2 << "\n";
      return;
    }
  }
  cout << 1 << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}