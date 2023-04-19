#include <iostream>
using namespace std;
int Tong5m(int[][100], int, int,int);
bool kt5m(int);
int main() {
	int a[100][100], n, m;
	cout << "Nhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	cout << "Nhap dong can tinh: ";
	int d;
	cin>>d;
	int kq = Tong5m(a, n, m,d);
	cout << "Ket qua: " << kq;

}
int Tong5m(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int s = Tong5m(a, m, n - 1, d);
	if (kt5m(a[d][n - 1]))
		s = s + a[d][n - 1];
	return s;

}
bool kt5m(int n) {
	int i = 0;
	while (pow(5, i) <= n) {
		if (pow(5, i) == n)
			return 1;
		i++;
	}
	return 0;
}
