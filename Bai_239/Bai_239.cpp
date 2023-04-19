#include <iostream>
#include <iomanip>
using namespace std;

float LonNhat(float[][100], int, int);
int main() {
	int m, n, d;
	float a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nGia Tri lon nhat trong ma tran la : ";
	int kq = LonNhat(a, m, n);
	cout << kq;
	return 0;
}

float LonNhat(float a[][100], int m, int n) {
	if (m == 1)
	{
		float lc = a[0][0];
		for (int j = 0; j < n; j++)
			if (a[0][j] > lc)
				lc = a[0][j];
		return lc;
	}
	float lc = LonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > lc)
			lc = a[m - 1][j];
	return lc;
}