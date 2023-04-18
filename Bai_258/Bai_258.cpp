#include<iostream>
using namespace std;
void Nhap(int[][50], int, int);
int KtDong(int[][50], int, int,int );
void LietKe(int[][50], int, int);
int main() {
	int m;
	cout << "Nhap m: ";
	cin >> m;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[50][50];
	Nhap(a, m, n);
	cout << "Cac dong chua phan tu chan la:" << endl;
	LietKe(a,  m, n);
	return 0;
}
void Nhap(int a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int KtDong(int a[][50], int m, int n,int d) {
	if (n == 0)
		return 0;
	if (a[d][n - 1] % 2 == 0)
		return 1;
	return KtDong(a, m, n - 1, d);
}
void LietKe(int a[][50], int m, int n) {
	if (m == 0)
		return;
	LietKe(a, m-1, n);
	if (KtDong(a, m, n, m - 1) == 1)
		cout << m - 1 << endl;
}