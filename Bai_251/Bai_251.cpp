#include <iostream>
using namespace std;

float TongCot(float[][100], int, int, int);
float TongNhoNhat(float[][100], int, int);

int main() {
	int m, n, c;
	float a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	/*cout << "\nNhap vao cot c: ";
	cin >> c;*/

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	cout << "\nTong cua cot nho nhat la: ";
	int kq = TongNhoNhat(a, m, n);
	cout << kq;
	return 0;

}

float TongCot(float a[][100], int m, int n, int c) {
	if (m == 0)
		return 0;
	return TongCot(a, m - 1, n, c) + a[m - 1][c];
}

float TongNhoNhat(float a[][100], int m, int n) {
	if (n == 1)
		return TongCot(a, m, n, 0);
	float lc = TongNhoNhat(a, m, n - 1);
	if (TongCot(a, m, n, n - 1) < lc)
		lc = TongCot(a, m, n, n - 1);
	return lc;
}