#include<iostream>
using namespace std;
void Nhap(int[], int);
int TimUCLN(int[], int);
int ucln(int, int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	cout << "ket qua: " << TimUCLN(a, n);
	return 0;
}
void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int TimUCLN(int a[], int n) {
	if (n == 1)
		return a[0];
	int lc = TimUCLN(a, n - 1);
	lc = ucln(lc, a[n - 1]);
	return lc;
}
int ucln(int lc, int a) {
	if (a % lc == 0)
		return lc;
}
