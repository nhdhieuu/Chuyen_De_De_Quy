#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int [], int);
int DemNtPhanBiet(int [], int );
bool KtNguyenTo(int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	cout << "So pt nguyen to phan biet la: " << DemNtPhanBiet(a,n);
	return 0;
}
void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int DemNtPhanBiet(int a[], int n) {
	if (n == 0)
		return 0;
	int dem = DemNtPhanBiet(a, n - 1);
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
		if (a[i] == a[n - 1])
			flag = 0;
	if (flag == 1 && KtNguyenTo(a[n - 1]))
		 dem++;
	return dem;
}
bool KtNguyenTo(int n) {
	if (n <= 1)
		return false;
	int i = 1;
	int dem = 0;
	while (i <= sqrt(n)) {
		if (n % i == 0)
			dem++;
		i++;
	}
	if (dem >= 2)
		return false;
	return true;
}
