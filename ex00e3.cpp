#include <bits/stdc++.h>
using namespace std;

bool isPermutation(int n, set<int> sequence) {
    // Check size
    if (sequence.size() != n) return false;

    // Check permutation
    if (*sequence.begin() < 1 || *(--sequence.end()) > n) return false;

    return true;

}

int main() {

    int n;
    cin >> n;

    set<int> sequence;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sequence.insert(x);
    }

    // cout << *(--sequence.end());

    if (isPermutation(n, sequence) == 1) cout << "YES";
    else cout << "NO";

    return 0;
}