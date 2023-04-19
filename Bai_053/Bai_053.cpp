#include <iostream>
#include <iomanip>
using namespace std;

float Tinh(float, int);


int main() {
	float x;
	cout << "\nNhap vao x:";
	cin >> x;
	int n;
	cout << "\nNhap vao n: ";
	cin >> n;
	

	float kq = Tinh(x, n);
	cout << "\nKet qua cua bieu thuc la: " << kq;

	return 0;
}

float Tinh(float x, int n) {
	if (n == 0)
		return 1;
	if (n == 1)
		return (1 + x);
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return ((1 - x) * a - x * b);
}