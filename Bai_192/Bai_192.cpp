#include<iostream>
using namespace std;
void Nhap(int[][50], int, int);
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
	LietKe(a, m, n);
	return 0;
}
void Nhap(int a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin>> a[i][j];
}
void LietKe(int a[][50], int m, int n) {
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int i = 0; i < n; i++)
		if (a[m - 1][i] % 2 == 0)
			cout << " " << a[m - 1][i];
}