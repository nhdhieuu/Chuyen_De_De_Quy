#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
int DemGiaTri(int[], int);
bool KiemTra(int n);

int  main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	cout << "So phan tu chia het cho 7 la : " << DemGiaTri(a, n);
	return 0;
}
void Nhap(int a[], int n) {
	cout << "nhap mang a[]" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
int DemGiaTri(int a[], int n) {
	if (n == 0)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	if (KiemTra(a[n - 1]))
		return dem + 1;
	return dem;
}
bool KiemTra(int n) {
	if (n % 7 == 0)
		return true;
	return false;
}
