#include<iostream>
using namespace std;
void Nhap(float [] [50] , int, int);
void SapDongTang(float[][50], int, int, int);
void Xuat(float[][50], int, int);
int main() {
	int m;
	cout << "Nhap m: ";
	cin >> m;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int d;
	cout << "Nhap d: ";
	cin >> d;
	float a[50][50];
	Nhap(a, m, n);
	SapDongTang(a, m, n, d);
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
void SapDongTang(float a[][50], int m, int n, int d) {
	if (n == 1)
		return;
	for (int i = 0; i < n - 1; i++)
		if (a[d][i] > a[d][n - 1])
			swap(a[d][i], a[d][n - 1]);
	SapDongTang(a, m, n - 1, d);
}