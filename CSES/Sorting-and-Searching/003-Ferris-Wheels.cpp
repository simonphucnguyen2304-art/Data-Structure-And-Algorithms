#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<long long> &a, int l, int r, vector<long long> &temp) {
    if (l >= r) return;

    int mid = (l + r) / 2;

    mergeSort(a, l, mid, temp);
    mergeSort(a, mid + 1, r, temp);

    int i = l, j = mid + 1, k = l;

    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }

    while (i <= mid) temp[k++] = a[i++];
    while (j <= r) temp[k++] = a[j++];

    for (int p = l; p <= r; p++)
        a[p] = temp[p];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    vector<long long> w(n), temp(n);

    for (auto &v : w) cin >> v;

    mergeSort(w, 0, n - 1, temp);

    int i = 0, j = n - 1;
    int gondolas = 0;

    while (i <= j) {
        if (w[i] + w[j] <= x) i++;
        j--;
        gondolas++;
    }

    cout << gondolas;
}
