#include <iostream>
#include <iomanip>
using namespace std;

bool ktDoiXung(int);
int TongDong(int [][100], int , int , int);
int main() {
	int m, n, d;
	int a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	cout << "\nNhap vao dong: ";
	cin >> d;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nTong Cac Phan tu doi xung trong dong d: ";
	int kq = TongDong(a, m, n,d);
	cout << kq;
	return 0;
}

bool ktDoiXung(int n) {
	int t = n;
	int dn = 0;
	while (t != 0) {
		dn = dn * 10 + t % 10;
		t = t / 10;
	}
	if (dn == n)
		return true;
	return false;
}

int TongDong(int a[][100], int m, int n, int d) {
	if (n == 0)
		return 0;
	int s = TongDong(a, m , n-1,d);
	if (ktDoiXung(a[d][n-1]))
		s = s + a[d][n-1];
	return s;
}