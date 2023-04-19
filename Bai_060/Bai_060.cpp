#include<iostream>
using namespace std;

void Nhap(int[], int, int&);
int BinarySearch(int[], int, int,int);

int  main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	int x;
	Nhap(a, n, x);
	cout << "vi tri " << BinarySearch(a, 0, n - 1, x);
	return 0;
}
void Nhap(int a[], int n,int& x) {
	cout << "nhap mang a[]" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Nhap x: ";
	cin >> x;
}
int BinarySearch(int a[], int l, int r,int x) {
	if (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x)
			return m;
		else if (a[m] > x)
			return BinarySearch(a, l, m - 1, x);
		else
			return BinarySearch(a, m + 1, r, x);
	}
	return -1;
} 