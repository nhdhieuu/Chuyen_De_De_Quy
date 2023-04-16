#include <iostream>
using namespace std;
float Tong(float[][100], int, int,float,float);
int main() {
	float a[100][100],x,y;
	int n, m;
	cout << "Nhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	int kq = Tong(a, n, m,x,y);
	cout << "Tong cac so nam trong doan x y la: " << kq;
	return 0;
}
float Tong(float a[][100], int m, int n,float x,float y)
{
	if (m == 0)
		return 0;
	float s = Tong(a, m - 1, n,x,y);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > x && a[m - 1][j] < y)
			s = s + a[m - 1][j];
	return s;
}