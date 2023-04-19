#include <iostream>
using namespace std;

bool ktHoanThien(int);
int DemHoanThien(int[], int);


int main() {
	int n;
	int a[8] = { -2, 1, 4,-2, 3, 6, 7,-2 };
	cout << "\nNhap vao n: ";
	cin >> n;
	int kq = DemHoanThien(a, n);
	cout << "\nso cac so chan trong mang la: " << kq;

	return 0;
}

bool ktHoanThien(int k) {
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

int DemHoanThien(int a[], int n) {
	if (n == 0)
		return 0;
	int dem = DemHoanThien(a, n - 1);
	if (ktHoanThien(a[n-1]))
		dem++;
	return dem;
}