#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[], int&);
void LietKe(float[], int);

int main()
{
	float a[100000];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	cout << "Cac gia tri nho hon tri tuyet doi cua gia tri lien sau va lon hon gia tri lien truoc la:  ";
	LietKe(a, n);
	return 0;

}
void Input(float a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void LietKe(float a[], int n)
{
	if (n <= 2)
		return;
	if (a[n - 2] < abs(a[n - 1]) && a[n - 2] > a[n - 3])
		cout << setw(10) << setprecision(3) << a[n - 2];
	LietKe(a, n - 1);
}