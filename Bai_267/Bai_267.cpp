#include <iostream>
using namespace std;
void XayDung(float[][100], int, int, float[][100], int&, int&);
int main() {
	float a[100][100], b[100][100];
	int n, m, k, l;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	XayDung(a, m, n, b, k, l);
	cout << "Ma tran sau khi xu li: ";
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < l; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}
}
void XayDung(float a[][100], int m, int n, float b[][100], int& k, int& l)
{
	if (m == 0)
	{
		k = 0;
		l = n;
		return;
	}
	XayDung(a, m - 1, n, b, k, l);
	for (int j = 0;j < l;j++)
		b[m - 1][j] = abs(a[m - 1][j]);
	k++;
}


