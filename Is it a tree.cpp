#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define pb push_back
#define vi vector
 
void dfs(int p, vi<vi<int>> &A, vi<bool> &visited) {
    visited[p] = true;
    for (int i = 0; i < A[p].size(); i++) {
        if (!visited[A[p][i]]) {
            dfs(A[p][i], A, visited);
        }
    }
}
 
void test_case() {
    int n, m;
    cin >> n >> m;
    vi<vi<int>> A(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        A[u].pb(v);
        A[v].pb(u);
    }
    vi<bool> visited(n + 1, false);
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cnt++;
            dfs(i, A, visited);
        }
    }
    if (cnt == 1 && m == n - 1) {
        cout << "YES";
    } else cout << "NO";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
//    cin >> t;
    while (t--) {
        test_case();
    }
    return 0;
} 
