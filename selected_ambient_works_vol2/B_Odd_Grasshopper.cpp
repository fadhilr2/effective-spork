#include "bits/stdc++.h"
using namespace std;
#define int long long

vector<int> psum(const vector<int> &arr) {
 vector<int> psums(arr.size() + 1);
 for (int i = 0; i < arr.size(); i++) { psums[i + 1] = psums[i] + arr[i]; }
 return psums;
}

void solve(){
  int x0, n;
  cin >> x0 >> n;

  if(x0 % 2 == 0){
    if(n % 4 == 1) cout << x0 + (n * -1) << "\n";
    else if(n % 4 == 2) cout << x0 + 1 << "\n";
    else if(n % 4 == 3) cout << x0 + (n+1) << "\n";
    else if(n % 4 == 0) cout << x0 << "\n";   
  } else{
    if(n % 4 == 1) cout << x0 - (n * -1) << "\n";
    else if(n % 4 == 2) cout << x0 - 1 << "\n";
    else if(n % 4 == 3) cout << x0 - (n+1) << "\n";
    else if(n % 4 == 0) cout << x0 << "\n";   
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