#include <iostream>
using namespace std;
bool ktKhong(int[], int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	bool kq = ktKhong(a, n);
	if (kq)
		cout << "Mang co ton tai so 0";
	else
		cout << "Mang khong ton tai so 0";
	delete[]a;
	return 0;
}
bool ktKhong(int a[], int n) {
	if (n == 0)
		return 0;
	if (a[n - 1] == 0)
		return 1;
	return ktKhong(a, n - 1);
}