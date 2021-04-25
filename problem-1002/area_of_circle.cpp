#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double r, n;
	n = 3.14159;
	cin >> r;
	cout << fixed << setprecision(4) << "A=" << r * r * n << endl;
	return 0;
}
