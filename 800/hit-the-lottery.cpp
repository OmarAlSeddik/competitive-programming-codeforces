#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, count = 0;
    cin >> n;
    while (n >= 100) {
        count += n / 100;
        n %= 100;
    }
    while (n >= 20) {
        count += n / 20;
        n %= 20;
    }
    while (n >= 10) {
        count += n / 10;
        n %= 10;
    }
    while (n >= 5) {
        count += n / 5;
        n %= 5;
    }
    count += n;
    cout << count;
    return 0;
}