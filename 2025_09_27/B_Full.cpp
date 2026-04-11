/*
  author: SiAn01 / SidnyTech
  Name: Sidney A. Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  string n;
  cin >> n;
  map<char, int> freq;
  vector<int> counts;

  for (char c : n) {
    freq[c]++;
  }

  if (freq.size() != 2) {
    cout << "NO" << endl;
    return;
  }

  for (auto &p : freq)
    counts.push_back(p.second);
  sort(counts.begin(), counts.end());

  if (counts[0] == 2 && counts[1] == 3)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/