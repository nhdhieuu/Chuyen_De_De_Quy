#include <iostream>
using namespace std;

bool ktNguyenTo(int);
int NguyenToDau(int[], int);

int main() {

	int n;
	int a[8] = { -2, 1, 4,-2, 3, 6, 7,-2 };
	cout << "\nNhap vao n: ";
	cin >> n;

	int kq = NguyenToDau(a, n);
	cout << "\nSo nguyen to dau tien la: " << kq;
	return 0;
}

bool ktNguyenTo(int k) {
	int dem = 0;
	for (int i = 1; i <= k; i++) {
		if (k % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}

int NguyenToDau(int a[], int n) {
	if (n == 0)
		return -1;
	int lc = NguyenToDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (ktNguyenTo(a[n-1]))
		return a[n - 1];
	return -1;

}