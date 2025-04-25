#include <iostream>
using namespace std;

int A[6];

int main()
{
	for (int i = 0; i < 6; i++)
	{
		cin >> A[i];
	}
	cout << 1 - A[0] << " " << 1 - A[1] << " " << 2 - A[2] << " " << 2 - A[3] << " " << 2 - A[4] << " " << 8 - A[5];
	return 0;
}
