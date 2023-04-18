#include <iostream>
using namespace std;
bool ktChanLe(int[], int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	bool kq = ktChanLe(a, n);
	cout << kq;
	delete[]a;
	return 0;
}
bool ktChanLe(int a[], int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 0;
	if(n==2)
	{
		if ((a[0] + a[1]) % 2 == 0)
		{
			return 0;
		}
		return 1;
	}
	if ((a[n - 1] + a[n - 2]) % 2 != 0)
	{
		if (ktChanLe(a, n - 1) == 1)
			return 1;
	}
	return 0;
	
}