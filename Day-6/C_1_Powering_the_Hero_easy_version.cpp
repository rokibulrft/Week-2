#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> cards(n);

        for (int i = 0; i < n; i++) {
            cin >> cards[i];
        }

        long long totalPower = 0;
        priority_queue<int> bonusDeck;

        for (int i = 0; i < n; i++) {
            if (cards[i] > 0) {
                bonusDeck.push(cards[i]);
            } else if (!bonusDeck.empty()) {
                totalPower += bonusDeck.top();
                bonusDeck.pop();
            }
        }

        cout << totalPower << endl;
    }
}
