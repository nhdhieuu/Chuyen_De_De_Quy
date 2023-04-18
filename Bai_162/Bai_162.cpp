#include<iostream>
using namespace std;
void Nhap(int[], int);
void XoaViTri(int[], int&,int );
void XoaAm(int[], int&);
void Xuat(int[], int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	XoaAm(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void XoaViTri(int a[], int& n, int vt) {
	if (vt == n - 1)
	{
		n--;
		return;
	}
	a[vt] = a[vt + 1];
	XoaViTri(a, n, vt + 1);
}
void XoaAm(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			XoaViTri(a, n, i);
			i--;
		}
	}
}

void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}