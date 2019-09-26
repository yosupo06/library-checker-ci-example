#define PROBLEM https://judge.yosupo.jp/problem/unionfind

#include <iostream>
#include <vector>

using namespace std;
#include "../src/unionfind.h"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    UnionFind uf(n);

    for (int i = 0; i < q; i++) {
        int t, u, v;
        cin >> t >> u >> v;
        if (t == 0) {
            uf.merge(u, v);
        } else {
            cout << (uf.same(u, v) ? 1 : 0) << "\n";
        }
    }
    return 0;
}
