#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float km, l;
	cin >> km >> l;
	cout << fixed << setprecision(3) << km / l << " km/l" << endl;
	return 0;
}
