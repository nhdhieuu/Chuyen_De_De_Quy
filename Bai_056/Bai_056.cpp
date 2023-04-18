#include <iostream>
using namespace std;

float Tong(int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tong(n);
	cout << "Ket qua : " << kq;
	return 0;
}
float Tong(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	float a =Tong(n - 1);
	float b = Tong(n - 2);
	return a + 1 / (n + 1 / (a - b));
}