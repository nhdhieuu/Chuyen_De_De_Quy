#include <iostream>
using namespace std;

void XuatBo3(float, float, float);
void LietKe(float[], int );

int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Tat ca cac bo 3 thoa man la: ";
	LietKe(a, n);
	return 0;
}
void XuatBo3(float x, float y, float z) {
	cout << "(" << x << "," << y << "," << z << ")" << endl;
}
void LietKe(float a[], int n) {
	if (n <= 2)
		return;
	for (int i = 0; i <= n - 3; i++)
		for (int j = i + 1; j <= n - 2; j++)
		{
			if (a[i] == (a[j] + a[n - 1]))
			{
				XuatBo3(a[i], a[j], a[n - 1]);
				XuatBo3(a[i], a[n - 1], a[j]);
			}
			if (a[j] == (a[i] + a[n - 1]))
			{
				XuatBo3(a[j], a[i], a[n - 1]);
				XuatBo3(a[j], a[n - 1], a[i]);
			}
			if (a[n - 1] == (a[i] + a[j]))
			{
				XuatBo3(a[n - 1], a[i], a[j]);
				XuatBo3(a[n - 1], a[j], a[i]);
			}
		}
	LietKe(a, n - 1);
}