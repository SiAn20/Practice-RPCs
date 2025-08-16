// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;

vector<int> sliding_max(vector<int> &arr, int k) {
  deque<int> dq;
  vector<int> res;
  for (int i = 0; i < arr.size(); i++) {
    if (!dq.empty() && dq.front() <= i - k)
      dq.pop_front();
    while (!dq.empty() && arr[dq.back()] <= arr[i])
      dq.pop_back();
    dq.push_back(i);
    if (i >= k - 1)
      res.push_back(arr[dq.front()]);
  }
  return res;
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> a[i][j];

  int r, s;
  cin >> r >> s;

  vector<vector<int>> hor(n);
  for (int i = 0; i < n; i++) {
    hor[i] = sliding_max(a[i], s);
  }

  int new_m = m - s + 1;
  int new_n = n - r + 1;

  vector<vector<int>> res(new_n, vector<int>(new_m));
  for (int j = 0; j < new_m; j++) {
    vector<int> col(n);
    for (int i = 0; i < n; i++)
      col[i] = hor[i][j];
    vector<int> colmax = sliding_max(col, r);
    for (int i = 0; i < new_n; i++)
      res[i][j] = colmax[i];
  }

  for (int i = 0; i < new_n; i++) {
    for (int j = 0; j < new_m; j++) {
      cout << res[i][j] << (j + 1 == new_m ? '\n' : ' ');
    }
  }
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