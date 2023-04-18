#include<iostream>
using namespace std;
int KtToanChan(int );
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (KtToanChan(n) == 1)
		cout << "Toan chan";
	else
		cout << "Khong toan chan";
	return 0;
}
int KtToanChan(int n) {
	if (n <= 9) {
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int dv = n % 10;
	if (KtToanChan(n / 10)==1 && dv % 2 == 0)
		return 1;
	return 0;
}