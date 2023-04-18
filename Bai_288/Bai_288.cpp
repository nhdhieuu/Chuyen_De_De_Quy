#include<iostream>
using namespace std;
void Nhap(float[][50], int, int);
void DichLenCot(float[][50], int, int, int);
void DichLen(float[][50], int, int);
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
	DichLen(a, m, n);
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
void DichLenCot(float a[][50], int m, int n, int c) {
	float temp = a[0][c];
	for (int i = 0; i < m-1; i++)
		a[i][c] = a[i + 1][c];
	a[m - 1][c] = temp;
}

void DichLen(float a[][50], int m, int n) {
	if (n == 0)
		return;
	DichLen(a, m, n - 1);
	DichLenCot(a, m, n, n - 1);
}

