#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int);
int DemLonNhat(float[], int);
float LonNhat(float [],int );

int  main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float* a = new float[n];
	Nhap(a, n);
	cout << DemLonNhat(a, n);
	return 0;
}
void Nhap(float a[], int n) {
	cout << "nhap mang a[]" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
 int DemLonNhat(float a[], int n) {
	if (n == 0)
		return 0;
	float lc = LonNhat(a, n - 1);
	if (lc < a[n - 1])
		return 1;
	int dem = DemLonNhat(a, n - 1);
	if (lc == a[n - 1])
		dem++;
	return dem;
}
float LonNhat(float a[],int n) {
	if (n == 1)
		return a[0];
	float lc = LonNhat(a, n - 1);
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}
