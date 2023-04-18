#include<iostream>
using namespace std;
void Nhap(int[], int);
int KiemTraTinhChat(int[], int);
bool KiemTraHoanThien(int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	cout << "ket qua: " << KiemTraTinhChat(a, n);
	return 0;
}
void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int KiemTraTinhChat(int a[], int n) {
	if (n == 0)
		return 1;
	if (KiemTraHoanThien(a[n - 1]) && a[n - 1] > 256)
		return 0;
	return KiemTraTinhChat(a, n - 1);
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