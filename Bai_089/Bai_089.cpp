#include <iostream>
#include <iomanip>
using namespace std;


bool ktChinhPhuong( int);
int TongChinhPhuong(int [], int);

int main() {
	int n;
	int a[8] = { -2, 1, 4,-2, 3, 5, 7,-2 };
	cout << "\nNhap vao n: ";
	cin >> n;
	int kq = TongChinhPhuong(a, n);
	cout << "\nTong cac so chinh phuong cua mang la: "<<kq;
	
	return 0;
}

bool ktChinhPhuong(int n) {
	for (int i = 0; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

int TongChinhPhuong(int a[], int n) {
	if (n == 0)
		return 0;
	int s = TongChinhPhuong(a, n - 1);
	if (ktChinhPhuong(a[n - 1]))
		s = s + a[n - 1];
	return s;
}