#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	int r;
	cin >> r;
	cout << fixed << setprecision(3) << "VOLUME = " << ( 4.0 / 3.0 ) * 3.14159 * pow( r, 3 ) << endl;
	return 0;
}
