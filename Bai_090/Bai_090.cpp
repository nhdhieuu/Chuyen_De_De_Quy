#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
int TongDoiXung(int[], int);
bool KtDoiXung(int);

int  main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	cout<<"ket qua: "<<TongDoiXung(a, n);
	return 0;
}
void Nhap(int a[], int n) {
	cout << "nhap mang a[]" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
int TongDoiXung(int a[], int n) {
	if (n == 0)
		return 0;
	int s=TongDoiXung(a, n - 1);
	if (KtDoiXung(a[n-1]))
		s = s + a[n - 1];
	return s;
}
bool KtDoiXung(int a) {
	int s = 0;
	int t = a;
	while (t > 0) {
		int dv = t % 10;
		s = s * 10 + dv;
		t = t / 10;
	}
	if (s == a)
		return true;
	return false;
}

