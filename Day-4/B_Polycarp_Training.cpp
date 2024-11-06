#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    multiset<int> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.insert(a);
    }
    int count = 0, day = 1;
    while (true) {
        auto it = v.lower_bound(day);
        if (it != v.end()) {
            count++;
            v.erase(it);
            day++;
        } else {
            break;
        }
    }
    cout << count;
}
