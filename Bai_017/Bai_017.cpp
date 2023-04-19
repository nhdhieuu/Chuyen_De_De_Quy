#include <iostream>
using namespace std;

float Tong(int);

int main() {
	int n;
	cout << "\nNhap vao n: ";
	cin >> n;
	float kq = Tong(n);
	cout << "\nKet qua cua bieu thuc la: " << kq;

	return 0;
}

float Tong(int n) {
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return (s + (float)1 / n / (n + 1)/(n+2)/(n+3)); 

}