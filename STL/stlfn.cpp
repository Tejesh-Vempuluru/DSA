#include <bits/stdc++.h>
using namespace std;

// Comparator function to sort pairs as required
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    return p1.first > p2.first;
}

void fun() {
    int a[5] = {3, 1, 7, 9, 34};
    int n = 5;  // Assuming n = 5 as array size is 5
    
    sort(a, a + n);               // Sort entire array
    sort(a + 2, a + 4);           // Sort a subset [a+2, a+4)
    sort(a, a + 5, greater<int>());  // Sort entire array in descending order

    vector<int> v = {4, 3, 2, 1, 5};
    sort(v.begin(), v.end());     // Sort vector in ascending order

    pair<int, int> p[] = {{1, 2}, {2, 1}, {4, 1}};
    int m = sizeof(p) / sizeof(p[0]);
    // Sort pairs as per the custom comparator
    sort(p, p + m, comp);         // Sort array of pairs

    int nu = 7;
    int cn = __builtin_popcount(nu);  // Count set bits in nu
    long long num = 1657547868LL;
    int cnt = __builtin_popcountll(num);  // Count set bits in num
    
    string s = "123";
    do {
        cout << s << endl;       // Print all permutations of string s
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);  // Find the maximum element in array a
    cout << "Max element: " << maxi << endl;  // Print maximum element
}

int main() {
    fun();
    return 0;
}
