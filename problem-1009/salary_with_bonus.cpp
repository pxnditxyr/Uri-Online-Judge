#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	string name;
	double a, b;
	cin >> name >> a >> b;
	cout << fixed << setprecision(2) << "TOTAL = R$ " << a + (b * 0.15) << endl;
	return 0;
}
