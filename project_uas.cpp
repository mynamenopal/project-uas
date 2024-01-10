#include <iostream>
using namespace std;

int main()
{
	int tingi;
	cout << "masukkan tinggi :";
	cin >> tingi;


	for (int i = 1; i <= tingi; i++) {
		for (int j = 1; j <= i; j++)
		{
			cout << " * ";
		}
		cout << "\n";
	}
	return 0;
}

