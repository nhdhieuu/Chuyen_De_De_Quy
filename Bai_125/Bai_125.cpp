#include <iostream>
using namespace std;

bool ktHoanThien(int);
int HoanThienCuoi(int[], int);

int main() {

	int n;
	int a[8] = { -2, 1, 4,-2, 3, 6, 7,-2 };
	cout << "\nNhap vao n: ";
	cin >> n;

	int kq = HoanThienCuoi(a, n);
	cout << "\nSo Hoan thien cuoi cung la: " << kq;
	return 0;
}



int HoanThienCuoi(int a[], int n) {
	if (n == 0)
		return -1;
	
	if (ktHoanThien(a[n - 1]))
		return a[n - 1];
	return HoanThienCuoi(a, n - 1);

}
bool ktHoanThien(int k) {
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}