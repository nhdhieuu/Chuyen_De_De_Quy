#include<iostream>
using namespace std;
void Nhap(float[], int);
void NguyenHoa(float[], int);
void Xuat(float[], int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float* a = new float[n];
	Nhap(a, n);
	NguyenHoa(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(float a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void Xuat(float a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
void NguyenHoa(float a[], int n) {
	if (n == 0)
		return;
	if (a[n - 1] > 0)
		a[n - 1] = (float)int(a[n - 1] + 0.5);
	else
		a[n - 1] = (float)int(a[n - 1] - 0.5);
	NguyenHoa(a, n - 1);
}