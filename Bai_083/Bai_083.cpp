#include <iostream>
#include <iomanip>
using namespace std;

float NhoNhat(float[], int);
void LietKe(float[], int);
int main() {
	int n;
	float a[8] = {-2, 1, 4,-2, 3, 5, 7,-2 };
	cout << "\nNhap vao n: ";
	cin >> n;
	cout << "\nLiet ke cac vi tri mang gia tri nho nhat: ";
	LietKe(a, n);
	return 0;
}

float NhoNhat(float a[], int n) {
	float lc = a[0];
	for (int i = 0; i < n - 1; i++) {
		if (a[i] < lc)
			lc = a[i];
	}
	return lc;
}

void LietKe(float a[], int n) {
	if (n == 0)
		return;
	float lc = NhoNhat(a, n - 1);
	if (lc > a[n - 1])
	{
		cout << setw(6) << n - 1;
		return;
	}
	if (lc == a[n - 1])
		cout << setw(6) << n - 1;

	LietKe(a, n - 1);
	
}