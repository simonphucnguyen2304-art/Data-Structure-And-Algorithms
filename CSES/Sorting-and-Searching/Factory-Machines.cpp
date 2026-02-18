#include <bits/stdc++.h>
using namespace std;

bool check(vector<long long> &a, long long n, long long t, long long time){
    long long total = 0 ;
    for (long long i=0; i<n; i++){
        total += time / a[i] ; 
        if (total >= t) return true; 
    }
    return false; 
}

long long main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, t ; 
    cin >> n >> t ; 
    vector<long long> a(n);
    for (long long i=0; i<n; i++){
        cin >> a[i]; 
    }

    long long left = 0;
    long long right = 1LL * t * (*min_element(a.begin(), a.end())); 
    long long res = -1; 
    while (left <= right){
        long long mid = (left + right) / 2; 
        if (check(a, n, t, mid)){
            res = mid ;
            right = mid - 1 ;
        }
        else {
            left = mid + 1;
        }

    }
    cout << res; 
    return 0;
}
