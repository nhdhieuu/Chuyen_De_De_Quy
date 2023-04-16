#include <iostream>
using namespace std;
bool ktGiam(int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	bool kq = ktGiam(n);
	if (kq)
		cout << "Cac chu so trong " << n << " la giam dan";
	else
		cout << "cac chu so trong " << n << " khong giam dan";
	return 0;
}
bool ktGiam(int n) {
	if (n <= 9)
		return 1;
	return (ktGiam(n / 10) && (n / 10) % 10 >= n % 10) ? 1 : 0;
}