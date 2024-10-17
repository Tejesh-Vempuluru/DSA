#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[20];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        bool found = false; // Flag to track if we found a valid index
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] > (a[n - 1] / 2)) {
                cout << i + 2 << endl; // Output the index (1-based)
                found = true; // Set flag to true
                break; // Exit loop after finding first valid index
            }
        }

        if (!found) {
            cout << -1 << endl; // Or some other indication if no valid index was found
        }
    }
    return 0;
}
