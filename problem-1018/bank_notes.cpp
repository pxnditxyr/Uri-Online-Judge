#include<iostream>

using namespace std;

int main()
{
	int money;
	int amount[7] = {  };
	int notas[] = {100, 50, 20, 10, 5, 2, 1};
	cin >> money;
	cout << money << endl;
	for (int i = 0; i < 7; i++) {
		while ( money - notas[i] >= 0 ) {
			money -= notas[i];
			amount[i] += 1;
		}
		cout << amount[i] << " nota(s) de R$ " << notas[i] << ",00" << endl;
	}
	return 0;
}
