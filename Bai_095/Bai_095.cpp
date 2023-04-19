#include <iostream>
using namespace std;

int DemChan(int[], int);


int main() {
	int n;
	int a[8] = { -2, 1, 4,-2, 3, 5, 7,-2 };
	cout << "\nNhap vao n: ";
	cin >> n;
	int kq = DemChan(a, n);
	cout << "\nso cac so chan trong mang la: " << kq;

	return 0;
}

int DemChan(int a[], int n) {
	if (n == 0)
		return 0;
	int dem = DemChan(a, n - 1);
	if (a[n - 1] % 2 == 0)
		dem++;
	return dem;
}