#include <bits/stdc++.h>
using namespace std;
 
long long calculateStickLengths(vector<int> &p, int n){
    sort(p.begin(), p.end()); 
    int median = p[n / 2]; 
    long long ans = 0; 
    for (int i = 0; i < n; i++){
        ans += abs(median - p[i]); 
    }
    return ans; 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n;
    vector<int> p(n); 
    for (int i = 0; i < n; i++){
        cin >> p[i]; 
    }
    cout << calculateStickLengths(p, n);
 
    return 0;
}
