#include <iostream>
#include <iomanip>
using namespace std;

float AmLonNhat(float[][100], int, int);
int main() {
	int m, n, d;
	float a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nGia Tri Am lon nhat trong ma tran la : ";
	int kq = AmLonNhat(a, m, n);
	cout << kq;
	return 0;
}

float AmLonNhat(float a[][100], int m, int n) {
	if (m == 0)
		return 0;
	float lc = AmLonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if(a[m-1][j]<0)
			if (lc==0 ||a[m - 1][j] > lc)
			lc = a[m - 1][j];
	return lc;
}