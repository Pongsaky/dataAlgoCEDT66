#include <bits/stdc++.h>
using namespace std;

map<string, string> sfList;

int main() {

    ios_base::sync_with_stdio(0);cin.tie(0);

    int n, m;
    cin >> n >> m;

    while(n--) {
        string f, s;
        cin >> f >> s;

        sfList[s] = f;
    }

    while(m--) {
        string p1, p2;
        cin >> p1 >> p2;

        string P1firstParent = sfList[p1];
        string P2firstParent = sfList[p2];

        // cout << "CHECK P1 first : " << P1firstParent << endl;
        // cout << "CHECK P2 first : " << P2firstParent << endl;

        string P1secondParent = sfList[P1firstParent];
        string P2secondParent = sfList[P2firstParent];
        // cout << "CHECK P1 second : " << P1secondParent << endl;
        // cout << "CHECK P2 second : " << P2secondParent << endl;

        if (P1secondParent == P2secondParent && (P1secondParent != "" || P2secondParent != "") && p1 != p2) cout << "YES";
        else cout << "NO";

        cout << endl;

    }

    return 0;
}