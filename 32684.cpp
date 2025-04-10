#include <iostream>
using namespace std;

int main()
{
	double A[6];
	double B[6];
	double resultA = 0;
	double resultB = 0;
	for (int i = 0; i < 6; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < 6; i++)
		cin >> B[i];
	resultA += (13 * A[0] + 7 * A[1] + 5 * A[2] + 3 * A[3] + 3 * A[4] + 2 * A[5]);
	resultB += (13 * B[0] + 7 * B[1] + 5 * B[2] + 3 * B[3] + 3 * B[4] + 2 * B[5])+1.5;
	if (resultA > resultB)
		cout << "cocjr0208";
	else
		cout << "ekwoo";
	return 0;
}
