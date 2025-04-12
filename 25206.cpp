#include <iostream>
#include <string>
using namespace std;

double N[20];
string A[20];
string B[20];
int main()
{
	double score = 0;
	double count=0;
	cout << fixed;
	cout.precision(6);
	for (int i = 0; i < 20; i++)
	{
		cin >> A[i] >> N[i] >> B[i];
	}
	for (int i = 0; i < 20; i++)
	{
		if (B[i] == "A+")
			score += N[i] * 4.5;
		else if (B[i] == "A0")
			score += N[i] * 4.0;
		else if (B[i] == "B+")
			score += N[i] * 3.5;
		else if (B[i] == "B0")
			score += N[i] * 3.0;
		else if (B[i] == "C+")
			score += N[i] * 2.5;
		else if (B[i] == "C0")
			score += N[i] * 2.0;
		else if (B[i] == "D+")
			score += N[i] * 1.5;
		else if (B[i] == "D0")
			score += N[i] * 1.0;
		else if (B[i] == "F")
			score += N[i] * 0;
		else
			count -= N[i];
		count += N[i];
	}
	cout << score / count << endl;
	return 0;
}
