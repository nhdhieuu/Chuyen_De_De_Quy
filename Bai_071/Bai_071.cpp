#include <iostream>
#include <iomanip>
using namespace std;

void LietKe(float[], int );
int main() {
	int n;
	float a[6] = { 1, 4, 3, 5, 7,-2 };
	cout << "\nNhap vao n: ";
	cin >> n;
	cout << "\nLiet ke cac so am: ";
	LietKe(a, n);
	return 0;
}

void LietKe(float a[], int n) {
	if (n == 0)
		return;
	LietKe(a,n - 1);
	if (a[n - 1] < 0)
		cout << setw(10) << setprecision(3) << a[n - 1];
}