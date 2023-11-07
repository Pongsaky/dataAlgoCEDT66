#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

int main() {

    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    // Question
    while (m--) {
        int p; cin >> p;

        int a = p - k;
        int b = p + k;

        auto itrA = lower_bound(vec.begin(), vec.end(), a);
        auto itrB = upper_bound(vec.begin(), vec.end(), b);

        int ans = distance(itrA, itrB);

        cout << ans << " ";
        
    }

    return 0;
}