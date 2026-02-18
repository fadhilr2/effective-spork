#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int a, b;
  cin >> a >> b;
  int xk, yk;
  cin >> xk >> yk;
  int xq, yq;
  cin >> xq >> yq;

  vector<pair<int, int>> fromKing;
  fromKing.push_back(make_pair(xk+a, yk+b));
  fromKing.push_back(make_pair(xk-a, yk+b));
  fromKing.push_back(make_pair(xk+a, yk-b));
  fromKing.push_back(make_pair(xk-a, yk-b));

  fromKing.push_back(make_pair(xk+b, yk+a));
  fromKing.push_back(make_pair(xk-b, yk+a));
  fromKing.push_back(make_pair(xk+b, yk-a));
  fromKing.push_back(make_pair(xk-b, yk-a));

  map<pair<int, int>, int> fromQueen;
  fromQueen[make_pair(xq+a, yq+b)] += 1;
  fromQueen[make_pair(xq-a, yq+b)] += 1;
  fromQueen[make_pair(xq+a, yq-b)] += 1;
  fromQueen[make_pair(xq-a, yq-b)] += 1;

  fromQueen[make_pair(xq+b, yq+a)] += 1;
  fromQueen[make_pair(xq-b, yq+a)] += 1;
  fromQueen[make_pair(xq+b, yq-a)] += 1;
  fromQueen[make_pair(xq-b, yq-a)] += 1;

  set<pair<int, int>> positions;
  for(int i = 0; i < fromKing.size(); i++){
    if(fromQueen[fromKing[i]]) positions.insert(fromKing[i]);
  }
  cout << positions.size() <<"\n";

}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}