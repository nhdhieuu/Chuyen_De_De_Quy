#include <iostream>
using namespace std;
int ktTang(int[], int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	int kq = ktTang(a, n);
	if (kq == 1)
		cout << "Mang tang";
	else
		cout << "Mang khong tang";
	delete[]a;
	return 0;
}
int ktTang(int a[], int n) {
	if (n ==0)
		return 0;
	if (n == 1)
		return 1;
	if ((a[n - 2] <= a[n - 1]) && ktTang(a, n - 1) == 1)
		return 1;
	return 0;
}