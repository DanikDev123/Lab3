

#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	float x1 = 0, x2 = 0, dx = 0, a = 0, b = 0, c = 0, F = 0;
	float x = 0;
	cout << "Enter x1 ";
	cin >> x1;
	cout << "Enter x2 ";
	cin >> x2;
	cout << "Enter dx ";
	cin >> dx;
	cout << "Enter a ";
	cin >> a;
	cout << "Enter b ";
	cin >> b;
	cout << "Enter c ";
	cin >> c;

	printf("-----------------\n");
	printf("|    X   |    F    |\n");
	printf("-----------------\n");

	for ( x = x1 ; x <= x2; x += dx) 
	{
		if (a < 0 && x != 0)
		{
			F = a * pow(x, 2) + pow(b, 2) * x;
		}
		else if (a > 0 && x == 0) {
			F = x - (a / x - c);
		}
		else {
			F = 1 + (x / c);
		}
	printf("| %.2f | %.2f |\n", x, F);

	}
	printf("-----------------\n");
}

