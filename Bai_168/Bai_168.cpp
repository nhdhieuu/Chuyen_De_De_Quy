#include<iostream>
using namespace std;

void inp(int* a, int n, int i) {
    if (i > n) return;
    cin >> *(a + i);
    inp(a, n, i + 1);
}

void print(int* a, int l, int r, int& sum) {
    if (l > r) {
        cout << '\n';
        return;
    }
    cout << *(a + l) << ' ';
    print(a, l + 1, r, sum);
    sum += *(a + l);
}

bool solve(int* a, int n, int i, int j, int k, bool trap) {
    if (i > n) return true;
    if (j > n) {
        return solve(a, n, i + 1, i + 1, i + 1, true);
    }
    if (k > j) {
        return solve(a, n, i, j + 1, i, true);
    }
    if (k == j && (k == i || *(a + k) > *(a + k - 1)) && trap) {
        int sum = 0;
        //cout << "Day con tang dan:\n";
        print(a, i, j, sum);
        //cout << "Tong cua day con tren:\n";
        cout << sum << '\n';
    }
    return solve(a, n, i, j, k + 1, trap & (k == i || *(a + k) > *(a + k - 1)));
}

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n;
    cin >> n;
    int* a = new int[n];
    inp(a, n, 1);
    solve(a, n, 1, 1, 1, true);
    delete[]a;
    return 0;
}