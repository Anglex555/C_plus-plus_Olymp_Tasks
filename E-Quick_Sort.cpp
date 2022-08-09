#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

vector<int> a ;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    int max = 0, ans, ansi;
    for (int i = 0; i < n; i++) {
        int p = (n - i) * a[i];
        if(p > max){
            max = p;
            ans = a[i];
            ansi = n - i;;
        }
    }
    cout << ansi << " " << ans;
    return 0;
}
