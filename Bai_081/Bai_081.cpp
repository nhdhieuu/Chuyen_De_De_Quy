#include <iostream>
#include <iomanip>
using namespace std;

bool ktToanChan(int);
void LietKe(int[], int, int, int);

int main()
{
	int a[] = { 1,2,3,4,5,6 };
	int x, y;
	cin >> x >> y;
	LietKe(a, 6, x, y);
	return 0;
}

bool ktToanChan(int n)
{
	if (n % 2 == 0)
		return 1;
	return 0;
}
void LietKe(int a[], int n,int x,int y)
{
	if (n == 0)
		return;
	LietKe(a, n - 1,x,y);
	if (a[n-1]>=x&&a[n-1]<=y&&ktToanChan(a[n - 1])==1)
		cout << setw(6) << a[n - 1];
}