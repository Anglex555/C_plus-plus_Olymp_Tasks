#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ((max(a, b) + 1) / 2) << " " << min(a, b);
    return 0;
}
