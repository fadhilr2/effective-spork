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

  vector<int> a;

  for(int i = 0; i < n; i++){
    int e;
    cin >> e;
    a.push_back(e);
  }

  for(int i = 1; i < n-1; i++){
    if(a[i-1] < a[i] && a[i] > a[i+1]){
      cout << "YES\n";
      cout << i << " " << i+1 << " " << i+2 << "\n";
      return;
    }
  }



  cout << "NO\n";


}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}