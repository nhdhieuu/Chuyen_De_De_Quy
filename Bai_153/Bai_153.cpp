#include <iostream>
using namespace std;
void SapTang(float[], int n);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	SapTang(a, n);
	cout << "Mang sau khi duoc sap tang: " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	delete[]a;
	return 0;
}
void SapTang(float a[], int n)
{
	if (n == 0)
		return;
	for (int i = 0;i < n - 1;i++)
		if (a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	SapTang(a, n - 1);
}