#include <bits/stdc++.h>
using namespace std;

queue<int> q;
vector<int> vec;

int main() {

    int n, a;
    cin >> n >> a;

    q.push(a);
    while(!q.empty()) {
        int currIdx = q.front();
        vec.push_back(currIdx);
        q.pop();
        int lhs = currIdx * 2 + 1;
        int rhs = currIdx * 2 + 2;

        if (lhs < n) q.push(lhs);
        if (rhs < n) q.push(rhs);
    }
    
    cout << vec.size() << endl;
    for (auto x : vec) cout << x << " ";

    return 0;
}