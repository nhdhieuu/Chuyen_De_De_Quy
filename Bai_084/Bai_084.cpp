#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int);
void LietKe(float[], int);

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
	if (a[n-2]>abs(a[n-1]))
		cout << setw(10) <<setprecision(3)<< a[n-2];
	LietKe(a, n - 1);
}
