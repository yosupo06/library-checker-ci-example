#define PROBLEM https://judge.yosupo.jp/problem/aplusb

#include <iostream>

using namespace std;
using ll = long long;

#include "../src/aplusb.h"

int main() {
    int a, b;
    cin >> a >> b;
    cout << aplusb(a, b) << endl;
}
