#include <iostream>
using namespace std;

int TimViTri(float[], int);

int main()
{
	float a[] = { 1.2,32,-1,-1.2 };
	int n = sizeof(a) / sizeof(float);
	cout << TimViTri(a, n);
	return 1;
}

int TimViTri(float a[], int n)
{
	if (n == 1)
		return 0;
	int lc = TimViTri(a, n - 1);
	if (a[n - 1] < a[lc])
		lc = n - 1;
	return lc;
}