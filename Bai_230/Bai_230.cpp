#include <iostream>
using namespace std;
int DemDang2m(int[][100], int, int);
bool kt2m(int);
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
	int kq = DemDang2m(a, n, m);
	cout << "Ket qua: " << kq;

}
int DemDang2m(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemDang2m(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (kt2m(a[m - 1][j]))
		dem = dem + 1;
	return dem;
}
bool kt2m(int n) {
	int i = 0;
	while (pow(2, i) <= n) {
		if (pow(2, i) == n)
			return 1;
		i++;
	}
	return 0;
}