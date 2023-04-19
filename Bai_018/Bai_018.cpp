#include<iostream>
using namespace std;
float Tong(int);
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	cout << "ket qua: " << Tong(n);
	return 0;
}
float Tong(int n) {
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return(s + 1 / (sqrt(n) + sqrt(n + 1)));
}