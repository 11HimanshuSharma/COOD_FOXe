using ll = long long;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> a, b(m);
        for (int i = 0; i < n; i++) {
            int v;
            cin >> v;
            if (a.empty() || v > a[0]) {
                a.push_back(v);
            }
        }
        for (int j = 0; j < m; j++) {
            cin >> b[j];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> rk;
        for (int i = 0, j = 0; i < (int)b.size(); i++) {
            while (j < (int)a.size() && a[j] < b[i]) {
                ++j;
            }
            if (j > 0 && j < (int)a.size()) {
                rk.push_back(a.size() - j);
            }
        }

        sort(rk.begin(), rk.end(), greater<int>());
        for (int i = 1; i <= m; i++) {
            int r = m % i;
            ll ans = m / i;
            for (int j = r; j < (int)rk.size(); j += i) {
                ans += rk[j];
            }
            cout << ans << ' ';
        }
        cout << '\n';
    }
    return 0;
} 