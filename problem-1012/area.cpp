#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	cout << fixed << setprecision(3);
	cout << "TRIANGULO: " << ( a * c ) / 2 << endl;
	cout << "CIRCULO: " << 3.14159 * pow( c, 2 ) << endl;
	cout << "TRAPEZIO: " << ( ( a + b ) / 2 ) * c << endl;
	cout << "QUADRADO: " << b * b << endl;
	cout << "RETANGULO: " << a * b << endl;
	return 0;
}
