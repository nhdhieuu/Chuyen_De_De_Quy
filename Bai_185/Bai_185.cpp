#include <iostream>
using namespace std;

int  DemPhanBiet(float [], int n);
int main() {

	int n;
	float a[8] = { 1,9,7,3,1,5,7,0 };
	cout << "\nNhap vao n: ";
	cin >> n;
	cout << "\nDem phan biet: ";
	int kq=DemPhanBiet(a, n);
	cout << kq;
	return 0;
}

int DemPhanBiet(float a[], int n) {
	if (n ==0)
		return 0;
	if (n == 1)
		return 1;
	int dem = DemPhanBiet(a, n - 1);
	int flag = 1;
	for (int i = 0; i <= n-2; i++)
		if (a[i] == a[n - 1])
			flag = 0;
	if (flag == 1)
		dem++;
	return dem;
}