#include <iostream>
#include <iomanip>
using namespace std;

bool ktDang2m(int);
void LietKe(int[][100], int, int);

int main() {
	int m, n;
	int a[100][100];
	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nLiet ke cac phan tu co dang 2^m: ";
	LietKe(a, m, n);
	return 0;
}

bool ktDang2m(int k) {
	if (k < 1)
		return false;
	bool flag = true;
	for (int t = k; t > 1; t = t / 2) {
		int du = t % 2;
		if (du != 0)
			flag = false;

	}
	return flag;
}

void LietKe(int a[][100], int m, int n) {
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang2m(a[m - 1][j]))
			cout << setw(4) << a[m - 1][j];
}