#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
float Tich(int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tich(n);
	cout << "Ket qua: " << kq;
	return 0;
}
float Tich(int n) {
	if (n == 0)
		return 0;
	return sqrt(n + Tich(n - 1));
}