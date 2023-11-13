#include <bits/stdc++.h>
using namespace std;

priority_queue<pair<int, string>> pq;
map<string, int> score;

int main() {

    int n, k;
    cin >> n >> k;

    string x;

    while(n--) {
        cin >> x;
        score[x]++;
    }

    for (auto p : score) pq.push(make_pair(p.second, p.first));

    for (int i = 0; i < min(k-1, (int)pq.size() + 1); i++) pq.pop(); 
    cout << pq.top().first;

    return 0;
}