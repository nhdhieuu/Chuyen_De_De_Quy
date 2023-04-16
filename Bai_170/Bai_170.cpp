#include <iostream>
using namespace std;
int DemConTang(int[], int);
int DemConTang(int [],int , int);
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
	int kq = DemConTang(a,n);
	cout << "So mang con tang trong mang la: " << kq;
	delete[]a;
	return 0;
}
int DemConTang(int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		dem += DemConTang(a, i, n);
	}
	return dem;
}
int DemConTang(int a[], int begin ,int end) {
	if (begin == end - 1)
		return 0;
	if (ktTang(a, begin, end))
	{
		return 1 + DemConTang(a,begin,end - 1) ;
	}
	else
		return DemConTang(a, begin, end - 1);
}
bool ktTang(int a[], int begin, int end) {
	for (int i = begin; i < end-1; i++) {
		if (a[i] > a[i + 1])
			return 0;
	}
	return 1;
}