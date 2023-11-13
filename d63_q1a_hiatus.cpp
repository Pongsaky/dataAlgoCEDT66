#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> vec;

int main() {

    int n,m;
    cin >> n >> m;

    while(n--) {
        int a, b;
        cin >> a >> b;
        vec.push_back({a, b});
    }

    sort(vec.begin(), vec.end());

    while(m--) {
        int x, y;
        cin >> x >> y;

        vector<pair<int,int>>::iterator itr = lower_bound(vec.begin(), vec.end(), make_pair(x,y));

        if (itr == vec.begin()) cout << "-1 -1 ";
        else if ((*itr).first == x && (*itr).second == y) cout << "0 0 ";
        else cout << (*(itr - 1 )).first << " " << (*(itr - 1)).second << " ";
    }


    return 0;
}