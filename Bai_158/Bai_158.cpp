#include <iostream>
using namespace std;
void DuongTang(float[], int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	DuongTang(a, n);
	cout << "Mang sau khi duoc sap tang: " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	delete[]a;
	return 0;
}
void DuongTang(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] > 0 && a[n - 1] > 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
		DuongTang(a, n);
	}
}