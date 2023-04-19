#include<iostream>
using namespace std;
void Nhap(float[][50], int, int);
int TongDong(float[][50], int, int,int );
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
	cout << "Tong Dong: " << TongDong(a, m, n,d);
	return 0;
}
void Nhap(float a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int TongDong(float a[][50], int m, int n,int d) {
	if (n == 0)
		return 0;
	int s = TongDong(a, m , n-1,d);
	s = s + a[d][n - 1];
	return s;
}