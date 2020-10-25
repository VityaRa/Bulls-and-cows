#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char a, b, c, d;
	srand(time(0));
	a = 49 + rand() % (57 - 48 + 1);
	b = 48 + rand() % (57 - 48 + 1);
	c = 48 + rand() % (57 - 48 + 1);
	d = 48 + rand() % (57 - 48 + 1);
	if ((a == b) || (a == c) || (a == d) || (b == c) || (b == d) || (c == d))
	{
		do
		{
			a = 49 + rand() % (57 - 48 + 1);
			b = 48 + rand() % (57 - 48 + 1);
			c = 48 + rand() % (57 - 48 + 1);
			d = 48 + rand() % (57 - 48 + 1);
		} while ((a == b) || (a == c) || (a == d) || (b == c) || (b == d) || (c == d));
	}
	cout << a<< b<< c << d << endl;
	cout << "Input four-digit number " << endl;
	char x, y, z, f;
	int K, B, R;
	K = 0;
	R = 1;
	B = 0;
	do
	{
		cout << R << ") ";
		cin >> x >> y >> z >> f;
		if ((x == b) || (x == c) || (x == d))
			K = K + 1;
		else if (x == a) B = B + 1;
		if ((y == a) || (y == c) || (y == d))
			K = K + 1;
		else if (y == b) B = B + 1;
		if ((z == a) || (z == b) || (z == d))
			K = K + 1;
		else if (z == c) B = B + 1;
		if ((f == a) || (f == b) || (f == c))
			K = K + 1;
		else if (f == d) B = B + 1;
		cout << "Correct number count: " << K << ", " << "Correct number & position count : " << B << endl<< endl;
		K = 0;
		B = 0;
		R = R + 1;
		if ((x == a) && (y == b) && (z == c) && (f == d))
			cout << "Congrats, it takes only  " << R << " tries" << endl;
	} while ((x != a) || (y != b) || (z != c) || (f != d));

}