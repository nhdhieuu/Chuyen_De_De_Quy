#include<iostream>
using namespace std;
void Nhap(int[], int);
int HoanThienDau(int[], int);
bool KiemTraHoanThien(int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	cout << "ket qua: " << HoanThienDau(a, n);
	return 0;
}
void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int HoanThienDau(int a[], int n) {
	if (n == 0)
		return -1;
	int lc = HoanThienDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (KiemTraHoanThien(a[n - 1]))
		return a[n - 1];
	return -1;
}
bool KiemTraHoanThien(int a) {
	int s = 0;
	int i = 1;
	while (i < a) {
		if (a % i == 0)
			s = s + i;
		i++;
	}
	if (a == s)
		return true;
	return false;
}