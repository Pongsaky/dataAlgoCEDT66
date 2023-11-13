#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v = A;
    int sizeMax = max(*max_element(A.begin(), A.end()), *max_element(B.begin(), B.end()));
    bool visited[sizeMax] = {0};

    for (int i = 0; i < A.size(); i++) visited[A[i]] = 1;

    for (int i = 0; i < B.size(); i++) {
        if (visited[B[i]] == 0) v.push_back(B[i]);
    }

    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    int sizeMax = max(*max_element(A.begin(), A.end()), *max_element(B.begin(), B.end()));
    bool visited[sizeMax] = {0};

    for (int i = 0; i < B.size(); i++) visited[B[i]] = 1;

    for (int i = 0; i < A.size(); i++) {
        if (visited[A[i]] == 1) v.push_back(A[i]);
    }
    
    return v;
}
