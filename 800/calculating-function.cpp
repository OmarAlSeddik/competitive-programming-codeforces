#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n%2) cout << -(n/2 + 1);
    else cout << n/2;
    return 0;
}