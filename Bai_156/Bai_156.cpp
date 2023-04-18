#include<iostream>
using namespace std;
void Nhap(int[], int);
void NguyenToTang(int[], int);
bool KtNguyenTo(int);
void Xuat(int[], int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	NguyenToTang(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void NguyenToTang(int a[], int n) {
	if (n == 1)
		return;
	for (int i = 0; i < n - 1; i++)
		if (KtNguyenTo(a[i]) && KtNguyenTo(a[n - 1]) && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	NguyenToTang(a, n - 1);
}
bool KtNguyenTo(int a) {
	if (a <= 1)
		return false;
	int i = 1;
	int dem = 0;
	while (i <= sqrt(a))
	{
		if (a % i == 0)
			dem++;
		i++;
	}
	if (dem >= 2)
		return false;
	return true;
}
void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}