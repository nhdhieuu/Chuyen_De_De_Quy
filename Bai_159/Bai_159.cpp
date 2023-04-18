#include <iostream>
using namespace std;
void ChanTangLeTang(int[], int n);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	ChanTangLeTang(a, n);
	cout << "Mang sau khi duoc sap tang: " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	delete[]a;
	return 0;
}
void ChanTangLeTang(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[n - 1] % 2 == 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
		if (a[i] % 2 != 0 && a[n - 1] % 2 != 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	}
	ChanTangLeTang(a, n - 1);
}