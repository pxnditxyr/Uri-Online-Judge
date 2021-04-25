#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int a, b, c, d;
	double e, f;
	cin >> a >> b >> e;
	cin >> c >> d >> f;
	cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << (b * e) + (d * f) << endl;

	return 0;
}
