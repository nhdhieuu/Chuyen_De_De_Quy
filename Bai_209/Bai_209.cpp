#include <iostream>
#include <iomanip>
using namespace std;

bool ktDang3m(int);
int Tong3m(int a[][100], int m, int n);
int main() {
	int m, n;
	int a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nLiet ke cac phan tu co dang 5^m trong cot c: ";
	int kq=Tong3m(a, m, n);
	cout << kq;
	return 0;
}

bool ktDang3m(int k) {
	if (k < 1)
		return false;
	bool flag = true;
	for (int t = k; t > 1; t = t / 3) {
		int du = t % 3;
		if (du != 0)
			flag = false;

	}
	return flag;
}

int Tong3m(int a[][100], int m, int n) {
	if (m == 0)
		return 0;
	int s = Tong3m(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang3m(a[m - 1][j]))
			s = s + a[m - 1][j];
	return s;
}