#include <iostream>
#include <iomanip>
using namespace std;

bool ktDang5m(int);
void LietKe(int[][100], int, int, int);

int main() {
	int m, n,c;
	int a[100][100];
	
	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	cout << "\nNhap vao cot: ";
	cin >> c;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nLiet ke cac phan tu co dang 5^m trong cot c: ";
	LietKe(a, m, n,c);
	return 0;
}

bool ktDang5m(int k) {
	if (k < 1)
		return false;
	bool flag = true;
	for (int t = k; t > 1; t = t / 5) {
		int du = t % 5;
		if (du != 0)
			flag = false;

	}
	return flag;
}

void LietKe(int a[][100], int m, int n, int c) {
	if (m == 0)
		return;
	LietKe(a, m - 1, n,c);
		if (ktDang5m(a[m - 1][c]))
			cout << setw(4) << a[m - 1][c];
}