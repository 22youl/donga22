#include <iostream>
using namespace std;

int main()
{
	int n, A, B;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A >> B;
		cout << A + B << "\n";
		cin.tie(NULL);
	}
	return 0;
}
