#include <iostream>
using namespace std;
int DemConGiam(int[], int);
int DemConGiam(int[], int, int);
bool ktTang(int[], int, int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	int kq = DemConGiam(a, n);
	cout << "So mang con giam trong mang la: " << kq;
	delete[]a;
	return 0;
}
int DemConGiam(int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		dem += DemConGiam(a, i, n);
	}
	return dem;
}
int DemConGiam(int a[], int begin, int end) {
	if (begin == end - 1)
		return 0;
	if (ktTang(a, begin, end))
	{
		return 1 + DemConGiam(a, begin, end - 1);
	}
	else
		return DemConGiam(a, begin, end - 1);
}
bool ktTang(int a[], int begin, int end) {
	for (int i = begin; i < end - 1; i++) {
		if (a[i] < a[i + 1])
			return 0;
	}
	return 1;
}