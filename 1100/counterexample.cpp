#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;
    if (l % 2) {
        if (r-l < 3) cout << -1;
        else cout << l+1 << " " << l+2 << " " << l+3;
    } else {
        if (r-l < 2) cout << -1;
        else cout << l << " " << l+1 << " " << l+2;
    }
    return 0;
}