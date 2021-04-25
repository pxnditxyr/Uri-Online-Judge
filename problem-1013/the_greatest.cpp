#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int a, b, c, major;
	cin >> a >> b >> c;
	major = ( a + b + abs( a - b ) ) / 2;
	major = ( major + c + abs( major - c ) ) / 2;
	cout << major << " eh o maior" << endl;
	return 0;
}
