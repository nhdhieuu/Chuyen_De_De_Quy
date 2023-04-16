#include <iostream>
#include <iomanip>
using namespace std;

bool ktToanLe(int);
void LietKe(int[], int);

int main()
{
	int a[] = { 1,2,3,4,5,6 };
	LietKe(a, 6);
	return 0;
}

bool ktToanLe(int n)
{
	if (n % 2 == 1)
		return 1;
	return 0;
}
void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if(ktToanLe(a[n-1]))
		cout << setw(6) << a[n - 1];
}