#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m, k;
    vector<int> a;
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    for (int i = 0; i < k; i++) {
        while (a[i] >= n) {
            a[i] -= n;
        }
        if (m == a[i] + 1) {
            m = 1;
        }else {
            if (m <= a[i] + 1) {
                m++;
            }
        }
    }
    cout << m;
    return 0;
}