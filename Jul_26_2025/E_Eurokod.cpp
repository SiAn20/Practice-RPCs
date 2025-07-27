// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n;
  cin >> n;

  vector<int> president_order(n);
  for (int i = 0; i < n; i++) {
    cin >> president_order[i];
  }
  map<int, int> pres;
  for (int i = 0; i < n; i++) {
    pres[president_order[i]] = n - i;
  }
  vector<pair<int, int>> miem(n);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    miem[i] = {i + 1, x};
  }

  sort(miem.begin(), miem.end(),
       [](const auto &a, const auto &b) { return a.second > b.second; });

  map<int, int> miembro_puntaje;
  for (int i = 0; i < n; i++) {
    miembro_puntaje[miem[i].first] = n - i;
  }

  map<int, pair<int, int>> total;

  for (int i = 1; i <= n; i++) {
    int total_points = pres[i] + miembro_puntaje[i];
    total[i] = {total_points, miembro_puntaje[i]};
  }

  vector<tuple<int, int, int>> final;
  for (auto &[code, vals] : total) {
    final.emplace_back(code, vals.first, vals.second);
  }

  sort(final.begin(), final.end(), [](const auto &a, const auto &b) {
    if (get<1>(a) != get<1>(b))
      return get<1>(a) > get<1>(b);
    return get<2>(a) > get<2>(b);
  });

  for (int i = 0; i < n; i++) {
    int code = get<0>(final[i]);
    int total_points = get<1>(final[i]);
    cout << i + 1 << ". Kod" << setw(2) << setfill('0') << code << " ("
         << total_points << ")" << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
}
/*
     /\_/\
    ( o.o )
     > ^ <
*/