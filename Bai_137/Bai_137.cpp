#include <iostream>
using namespace std;

int TanSuat(int[], int, int);
int TimGiaTri(int[], int);

int main() {

	int n;
	int a[8] = { -2, 1, 4,-2, 3, 6, 7,-2 };
	cout << "\nNhap vao n: ";
	cin >> n;

	int kq = TimGiaTri(a, n);
	cout << "\nSo co so lan xuat hien nhieu nhat la: " << kq;
	return 0;
}

int TanSuat(int a[], int n, int x) {
	if (n == 0)
		return 0;
	int dem = TanSuat(a, n - 1, x);
	if (a[n - 1] == x)
		dem++;
	return dem;
}

int TimGiaTri(int a[], int n) {
	if (n == 1)
		return a[0];
	int lc = TimGiaTri(a, n - 1);

	if (TanSuat(a,n,a[n-1])>TanSuat(a,n,lc))
		lc=a[n-1];
	return lc;

}