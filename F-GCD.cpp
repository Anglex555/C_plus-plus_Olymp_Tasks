#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int gcd(long long a, long long b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    long long a, b, n;
    cin >> a >> b >> n;
    long long m = (a * b) / gcd(a, b);
    cout << (n - n / m);
    return 0;
}