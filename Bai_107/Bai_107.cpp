#include <iostream>
using namespace std;

int TimViTri(float[], int, float);

int main() {

	int n;
	float a[8] = { -2, 1, 4,-2, 3, 6, 7,-2 };
	cout << "\nNhap vao n: ";
	cin >> n;
	int x;
	cout << "\nNhap vao x: ";
	cin >> x;
	int kq = TimViTri(a, n, x);
	cout << "\nVi tri co gia tri gan x nhat la: " << kq;
	return 0;
}

int TimViTri(float a[], int n, float x) {
	if (n == 1)
		return 0;
	int lc = TimViTri(a, n - 1, x);
	if (abs(a[n - 1] - x) < abs(a[lc] - x))
		lc = n - 1;
	return lc;
}