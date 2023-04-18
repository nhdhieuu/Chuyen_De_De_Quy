#include<iostream>
using namespace std;
void Nhap(float[][50], int, int);
float TongDong(float[][50], int, int, int);
void HoanViDong(float[][50], int, int, int, int);
void SapXep(float[][50], int, int);
void Xuat(float[][50], int, int);
int main() {
	int m;
	cout << "Nhap m: ";
	cin >> m;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float a[50][50];
	Nhap(a, m, n);
	SapXep(a, m, n);
	Xuat(a, m, n);
	return 0;
}
void Nhap(float a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void Xuat(float a[][50], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
float TongDong(float a[][50], int m, int n, int d) {
	if (n == 0)
		return 0;
	float s = TongDong(a, m, n - 1, d);
	s = s + a[d][n - 1];
	return s;
}
void HoanViDong(float a[][50], int m, int n, int d1, int d2) {
	if (n == 0)
		return;
	HoanViDong(a, m, n - 1, d1, d2);
	swap(a[d1][n - 1], a[d2][n - 1]);
}
void SapXep(float a[][50], int m, int n) {
	if (m == 1)
		return;
	for (int i = 0; i < m - 1; i++)
		if (TongDong(a, m, n, i) > TongDong(a, m, n, m - 1))
			HoanViDong(a, m, n, i, m - 1);
	SapXep(a, m - 1, n);
}

