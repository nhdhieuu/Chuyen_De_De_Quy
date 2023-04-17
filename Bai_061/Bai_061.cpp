#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
void QuickSort(int[], int);
void QuickSort(int[], int, int);
int Partition(int[], int, int);
void Output(int[], int);

int main()
{
	int a[100000], n;
	cout << "Nhap so phan tu cua mang a: ";
	cin >> n;
	Input(a, n);
	QuickSort(a, n);
	cout << "Mhang sau khi duoc sap xep la: " << endl;
	Output(a, n);
	return 0;
}
void QuickSort(int a[], int n)
{
	QuickSort(a, 0, n - 1);
}
void QuickSort(int a[], int l, int r)
{
	if (l < r)
	{
		int iPivot = Partition(a, l, r);
		QuickSort(a, l, iPivot - 1);
		QuickSort(a, iPivot + 1, r);
	}
}
int Partition(int a[], int l, int r)
{
	int iPivot = a[r];
	int vt = l - 1;
	for (int i = l; i < r; i++)
	{
		if (a[i] < iPivot)
		{
			vt++;
			swap(a[vt], a[i]);
		}
	}
	vt++;
	swap(a[vt], a[r]);
	return vt;
}
void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void Output(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(5);
}