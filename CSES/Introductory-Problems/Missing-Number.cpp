#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n ;
    long long sum = 0 ; 
    cin >> n; 
    for (int i = 1; i < n; i++){
        int a; 
        cin >> a; 
        sum += a; 
    }
    long long missingNumber = n*(n+1)/2 - sum ;
    cout << missingNumber; 
 
    return 0;
}
