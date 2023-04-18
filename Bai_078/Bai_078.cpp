#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int);
void LietKe(float[], int);
bool KtNguyenTo(int n);

int  main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float* a = new float[n];
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}
void Nhap(float a[], int n) {
	cout << "nhap mang a[]" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void LietKe(float a[], int n) {
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (KtNguyenTo(a[n-1]))
		cout << setw(6) << n-1;
}
bool KtNguyenTo(int n) {
	if (n <= 1)
		return false;
	int dem = 0;
	int i = 1;
	while (i <= sqrt(n)) {
		if (n % i == 0)
			dem++;
		i++;
	}
	if (dem >= 2)
		return false;
	return true;
}
