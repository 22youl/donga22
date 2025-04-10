#include <iostream>
using namespace std;

int main()
{
	int A, B;
	int N = 0;
	cin >> A >> B;
	if (A % 2 != 0) //A가 홀수
	{
		for (; A <= B;)
		{
			A += 2;
			N += 1;
		}
	}
	else if (A % 2 == 0) //A가 짝수
	{
		N += 1;
		for (; A < B;)
		{
			N += 1;
			A += 2;
		}
	}
	cout << N;
	return 0;
}
