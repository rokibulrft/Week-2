#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char cur;
        cin >> cur;
        string s;
        cin >> s;

        if (cur == 'g') {
            cout << 0 << endl;
            continue;
        }

        vector<int> next_green(n * 2, INT_MAX);
        s += s;
        int last_green = INT_MAX;

        for (int i = 2 * n - 1; i >= 0; i--) {
            if (s[i] == 'g') last_green = i;
            next_green[i] = last_green - i;
        }

        int max_wait = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == cur) max_wait = max(max_wait, next_green[i]);
        }
        
        cout << max_wait << endl;
    }
    
    return 0;
}
