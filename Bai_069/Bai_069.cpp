#include <iostream>
#include <iomanip>
using namespace std;

void Xuat(int[], int);

int main()
{
	int a[] = { 1,2,3,4,5,6 };
	Xuat(a, 6);
	return 0;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}
