#include<iostream>
using namespace std;
void Nhap(int[][50], int, int);
int KtCot(int[][50], int, int, int);
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
	cout << "Cac cot chua phan tu chinh phuong la:" << endl;
	LietKe(a, m, n);
	return 0;
}
void Nhap(int a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int KtCot(int a[][50], int m, int n, int c) {
	if (m == 0)
		return 0;
	if (sqrt(a[m-1][c])-(int)sqrt(a[m-1][c])==0)
		return 1;
	return KtCot(a, m-1, n , c);
}
void LietKe(int a[][50], int m, int n) {
	if (n == 0)
		return;
	LietKe(a, m , n-1);
	if (KtCot(a, m, n, n - 1) == 1)
		cout << n - 1 << endl;
}