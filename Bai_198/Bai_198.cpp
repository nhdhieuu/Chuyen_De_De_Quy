#include<iostream>
using namespace std;
void Nhap(int[][50], int, int);
void LietKe(int[][50], int, int, int);
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
	LietKe(a, m, n, d);
	return 0;
}
void Nhap(int a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void LietKe(int a[][50], int m, int n, int d) {
	if (n == 0)
		return;
	LietKe(a, m, n - 1, d);
	if (a[d][n - 1] % 2 == 0)
		cout << a[d][n - 1]<<" ";
}