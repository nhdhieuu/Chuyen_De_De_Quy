#include <iostream>
using namespace std;

int  Tong(int);

int main() {
	int n;
	cout << "\nNhap vao n: ";
	cin >> n;
	float kq = Tong(n);
	cout << "\nKet qua cua bieu thuc la: " << kq;

	return 0;
}

int  Tong(int n) {
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return (s + n*n*n*n);
}