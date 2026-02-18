#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int> &a, int l, int r){
    if (l >= r) return;
    int pivot = a[(l+r)/2] ;
    int i = l; 
    int j = r; 
    while (i<=j){
        while (a[i] < pivot) i++ ;
        while (a[j] > pivot) j-- ; 
        if (i<= j){
            swap(a[i], a[j]);
            i++ ; 
            j--;
        }
    }
    quickSort(a, l, j); 
    quickSort(a, i, r); 
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m , k ;
    cin >> n >> m >> k ; 
    vector <int> want(n) ; 
    vector <int> apt(m);
    for(int &x : want) cin >> x;
    for(int &x : apt) cin >> x;
    quickSort(want, 0 ,n-1); 
    quickSort(apt, 0, m-1);
    int i = 0 ;
    int j = 0 ; 
    int ans = 0 ; 
    while (i < n && j < m){
        if (apt[j] < want[i] - k) j++ ; 
        else if (apt[j] > want[i] + k) i++;
        else {
            ans++ ;
            i++ ; 
            j++ ;
        }

    }
    cout << ans;
    return 0;
}
