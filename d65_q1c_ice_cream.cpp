#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> vec;
vector<int> maxMoneyKeep(40002);
vector<int> totoalDay(40002);

int calculateDay(int P, int n) {
    int ans;

    vector<int>::iterator itr = lower_bound(maxMoneyKeep.begin(), maxMoneyKeep.begin() + n, P);
    // cout << *itr << endl;
    if (*itr - P >= 0) {
        int pos = distance(maxMoneyKeep.begin(), itr);
        float moneyOver = *itr - P;
        // cout << vec[pos].second << endl;
        ans = totoalDay[pos] - floor(moneyOver / vec[pos-1].second);

    } else {
        float moneyOver = P - *itr;
        // cout << vec[pos].second << endl;
        ans = totoalDay[n] + ceil(moneyOver / vec[n].second);
    }

    return ans;
}

int main() {

    ios_base::sync_with_stdio(0);cin.tie(0);

    int n, m, start;
    cin >> n >> m >> start;

    vec.push_back({0, start});

    for (int i = 0; i < n; i++) {
        int a, s;
        cin >> a >> s;
        vec.push_back({a, s});
    }

    sort(vec.begin(), vec.end());
    maxMoneyKeep[0] = 0;
    totoalDay[0] = -1;
    for (int i = 1; i <= n; i++) {
        maxMoneyKeep[i] = maxMoneyKeep[i - 1] + (vec[i].first - vec[i - 1].first) * vec[i-1].second;
        totoalDay[i] = totoalDay[i-1] + (vec[i].first - vec[i - 1].first);
        // cout << totoalDay[i] << " ";
    }

    while(m--) {
        int P, x, ans;
        cin >> P >> x;
        
        ans = calculateDay(P, n);

        if (x < ans) {
            vector<int>::iterator itr = lower_bound(totoalDay.begin(), totoalDay.begin() + n, x);
            int pos = distance(totoalDay.begin(), itr);
            int moneyBeforeZero =  maxMoneyKeep[pos] - ((totoalDay[pos] - x) * vec[pos-1].second);
            // cout << moneyBeforeZero << endl;
            ans = calculateDay(P + moneyBeforeZero, n);
        }

        cout << ans << " ";
    }

    return 0;
}