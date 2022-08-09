#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, i, j, c;
    cin >> m >> n >> i >> j >> c;
    bool isCor;
    
    if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)){
        if(c == 1){
            isCor = true;
        }else{
            isCor = false;
        }
    }else {
        if(c == 0){
            isCor = true;
        }else{
            isCor = false;
        }
    }
    if ((n * m) % 2 == 0){
        cout << "equal";
    }else {  
        if (isCor){
            cout << "white";
        }
        if (!isCor){
            cout << "black";
        }
    }
    return 0;
}