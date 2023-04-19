#include <iostream>
#include <iomanip>
using namespace std;

void Xuat(float[], int);

int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	Xuat(a, n);
	delete[]a;
	return 0;
}

void Xuat(float a[], int n) {
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << setprecision(3)<< a[n - 1];
}

