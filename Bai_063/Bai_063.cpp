#include <iostream>
using namespace std;

void Tower(int n, char a, char b, char c)
{
	if (n == 1)
	{
		cout << "\t" << a << "-----" << c << endl;
		return;
	}
	Tower(n - 1, a, c, b);
	Tower(1, a, b, c);
	Tower(n - 1, b, a, c);
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	char a, b, c;
	cin >> a>> b>> c;
	Tower(n, a, b, c);
	return 1;
}