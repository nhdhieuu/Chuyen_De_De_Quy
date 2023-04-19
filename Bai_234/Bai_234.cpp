#include<iostream>
using namespace std;
void Nhap(int[][50], int, int);
int DemToanLe(int[][50], int, int,int );
bool KiemTra(int);
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
	int a[50][50];
	Nhap(a, m, n);
	cout << "So phan le tren dong "<<d<<": " << DemToanLe(a, m, n,d);
	return 0;
}
void Nhap(int a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int DemToanLe(int a[][50], int m, int n,int d) {
	if (n == 0)
		return 0;
	int dem = DemToanLe(a, m, n - 1, d);
	if (KiemTra(a[d][n-1]))
		dem++;
	return dem;
}
bool KiemTra(int n) {
	if (n % 2 == 0)
		return false;
	int t = n;
	while (t > 0) {
		int dv = t % 10;
		if (dv % 2 == 0)
			return false;
		t = t / 10;
	}
	return true;
}