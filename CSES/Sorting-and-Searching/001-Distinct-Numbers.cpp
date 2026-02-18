#include <bits/stdc++.h>
using namespace std;

void mergeArr(vector<long long> &a, int l, int mid, int r){
    vector <long long > temp ;
    int i = l ;
    int j = mid + 1; 
    while (i<= mid && j<= r){
        if (a[i] < a[j]) temp.push_back(a[i++]);
        else temp.push_back(a[j++]); 

    }

    while (i <= mid){
        temp.push_back(a[i++]);
        
    }
    while (j <= r) {
        temp.push_back(a[j++]); 
    }

    for (int k=0; k<temp.size(); k++){
        a[l + k] = temp[k];
    }
}


void mergeSort(vector<long long> &a, int l, int r) {
    if (l >= r) return;

    int mid = (l + r) / 2;

    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);

    mergeArr(a, l, mid, r);
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ; 
    cin >> n ; 
vector<long long> a(n);
    for (auto &x : a) cin >> x;

    mergeSort(a, 0, n - 1);

    int cnt = (n > 0);
    for (int i = 1; i < n; i++)
        if (a[i] != a[i - 1]) cnt++;

    cout << cnt;
    return 0;
}
