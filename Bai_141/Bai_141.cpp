#include <iostream>
using namespace std;
int ktTonTai(int[], int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	int kq = ktTonTai(a, n);
	if (kq==1)
		cout << "Mang co ton tai 2 gia tri 0 lien tiep";
	else
		cout << "Mang khong ton tai 2 gia tri 0 lien tiep";
	delete[]a;
	return 0;
}
int ktTonTai(int a[], int n) {
	if (n <= 1)
		return 0;
	if (a[n - 1] == 0 && a[n - 2] == 0)
		return 1;
	return ktTonTai(a, n - 1);
}