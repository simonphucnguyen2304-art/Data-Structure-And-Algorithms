#include <bits/stdc++.h>
using namespace std;

long long solve(long long n, long long x, vector<long long> &arr){
    long long start = 0; 
    long long end = -1;
    long long sum = 0;
    long long count = 0 ; 
    while (end < n){
        while (end < n && sum < x){
            end += 1 ;
            sum += arr[end]; 
        }
        while(start <= end && sum > x){
            sum -= arr[start]; 
            start += 1; 
        }
        if (sum == x){
            count += 1;
            sum -= arr[start]; 
            start += 1; 
        }
    }
    return count; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, x; 
    cin >> n >> x; 
    vector<long long> arr(n); 
    for (int i = 0; i < n; i++){
        cin >> arr[i]; 
    }
    cout << solve(n,x, arr); 
    return 0;
}
