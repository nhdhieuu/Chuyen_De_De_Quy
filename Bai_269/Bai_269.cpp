#include <iostream>
#include <iomanip>
using namespace std;

void HoanViCot(float[][100], int, int, int, int);
int main() {
	int m, n, c1, c2;
	float a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	cout << "\nNhap vao cot c1, c2: ";
	cin >> c1>>c2;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nMang sau khi hoan vi c1 va c2 : ";
	HoanViCot(a, m, n, c1,c2);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(4);
	return 0;
}

void HoanViCot(float a[][100], int m, int n, int c1, int c2) {
	if (m == 0)
		return;
	HoanViCot(a, m - 1, n, c1, c2);
	swap(a[m - 1][c1], a[m - 1][c2]);
}