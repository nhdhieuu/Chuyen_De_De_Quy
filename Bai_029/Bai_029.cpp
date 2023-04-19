#include <iostream>
using namespace std;

float Tinh(int);

int main() {
	int n;
	cout << "\nNhap vao n: ";
	cin >> n;
	float kq = Tinh(n);
	cout << "\nKet qua cua bieu thuc la: " << kq;

	return 0;
}

float Tinh(int n) {
	if (n == 0)
		return 1;
	return 1 / (1 + Tinh(n - 1));
}