#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
int ucln(int, int);
int bcnn(int, int);
int TimBCNN(int[], int);

int main()
{
	int a[100000], n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	int kq = TimBCNN(a, n);
	cout << "Boi chung nho nhat cua cac phan tu trong mang la: " << kq;
	return 0;
}
void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a + b;
}
int bcnn(int a, int b)
{
	return abs(a * b) / ucln(a, b);
}
int TimBCNN(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = TimBCNN(a, n - 1);
	lc = bcnn(lc, a[n - 1]);
	return lc;
}