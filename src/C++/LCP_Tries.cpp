//#include <bits/stdc++.h>
#include <map>
#include <iostream>
#include <string>
using namespace std;
#define LL long long
const int N = 1e6 + 1;
map<char, int> t[N];
int mycnt[N];

int get_node() {
  static int next_node = 0;
  return next_node++;  
}

double dfs(int node) {
  double ans = 0.5 * mycnt[node] * (mycnt[node] - 1);
  for (auto it=t[node].begin() ;it!=t[node].end();++it) {
    ans += dfs(it->second);
  }
  return ans;
}
int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);  
  get_node();  
  int n; cin >> n;
  for (int _ = 0; _ < n; ++_) {
    string s; cin >> s;
    int r = 0;
    for (auto ch=s.begin();ch!=s.end(); ++ch) {
      ++mycnt[r];
      if (t[r].find(*ch) == t[r].end()) {
        t[r][*ch] = get_node();
      }
      r = t[r][*ch];
    }
    ++mycnt[r];
  }
  
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(12);
  cout << 2 * dfs(0) / n / (n - 1) - 1 << endl;
}