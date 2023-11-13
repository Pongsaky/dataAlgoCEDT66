#include <bits/stdc++.h>
using namespace std;

vector<int> arr(100002, 0);

int main() {

    ios_base::sync_with_stdio(0);cin.tie(0);

    int n, m, start;
    cin >> n >> m >> start;
    
    arr[0] = start;
    for (int i = 1; i <= n; i++) {
        int a, s;
        cin >> a >> s;
        arr[a] = s;
    }

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != 0) start = arr[i];
        arr[i] = arr[i-1] + start;
    }

    while(m--) {
        int P, x, ans;
        cin >> P >> x;

        if (arr[x] >= P) ans = lower_bound(arr.begin(), arr.end(), P) - arr.begin();
        else ans = lower_bound(arr.begin(), arr.end(), P + arr[x]) - arr.begin();

        cout << ans << " ";
    }

    return 0;
}