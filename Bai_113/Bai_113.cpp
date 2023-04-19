#include <iostream>
using namespace std;

int ChanDau(int[], int);

int main() {

	int n;
	int a[8] = { -2, 1, 4,-2, 3, 6, 7,-2 };
	cout << "\nNhap vao n: ";
	cin >> n;
	
	int kq = ChanDau(a, n);
	cout << "\ngia tri chan dau tien la: " << kq;
	return 0;
}

int ChanDau(int a[], int n){
	if (n == 0)
		return -1;
	int lc = ChanDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (a[n - 1] % 2 == 0)
		return a[n - 1];
	return -1;

}