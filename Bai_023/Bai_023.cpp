#include <iostream>
using namespace std;

int TichChuSo(int);

int main() {
	int n;
	cout << "\nNhap vao n: ";
	cin >> n;
	float kq = TichChuSo(n);
	cout << "\nKet qua cua bieu thuc la: " << kq;

	return 0;
}
int TichChuSo(int n) {
	n = abs(n);
	if (n <= 9)
		return n;
	int T = TichChuSo(n / 10);
	int dv = n % 10;
	return T * dv;
}