#include <iostream>
using namespace std;

bool ktDoiXung(int);
int DemDoiXung(int[], int);


int main()
{
	int a[] = { 15,53,424,121,4224,12,17 };
	int n = sizeof(a) / sizeof(int);
	cout << DemDoiXung(a, n); // 424,121,4224
}

bool ktDoiXung(int k)
{
	int dn = 0;
	for (int t = k = abs(k); t != 0; t = t / 10)
		dn = dn * 10 + t % 10;
	return (dn == k);
}
int DemDoiXung(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemDoiXung(a, n - 1);
	if (ktDoiXung(a[n - 1]))
		dem++;
	return dem;
} 