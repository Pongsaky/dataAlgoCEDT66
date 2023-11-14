#include <bits/stdc++.h>
using namespace std;

list<int> rList, lList;

bool zumaBomb(int x) {

    int cnt=0;

    list<int>::iterator lItr = lList.begin();
    list<int>::iterator rItr = rList.begin();

    while (lItr != lList.end() && *lItr == x) {
        lItr++;
        cnt++;
    }

    while (rItr != rList.end() && *rItr == x) {
        rItr++;
        cnt++;
    }

    if (cnt >= 3) {
        lList.erase(lList.begin(), lItr);
        rList.erase(rList.begin(), rItr);
        return true;
    }

   return false; 
}

int main() {


    int n, k, v;
    cin >> n >> k >> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (i < k) lList.push_front(x);
        else rList.push_back(x);
    }

    lList.push_front(v);

    while(!lList.empty() && !rList.empty()) {
        int x = *(lList.begin());

        if (!zumaBomb(x)) break;

    }

    lList.reverse();
    for (auto x : lList) cout << x << " ";
    for (auto x : rList) cout << x << " ";

    return 0;
}