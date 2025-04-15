#include <iostream>
using namespace std;

int main()
{
	int i = 2;
	int N;
	cin >> N;
	for (; i<=N ;)
	{
		if (N % i == 0)
		{
			cout << i << endl;
			N /= i;
		}
		else
			i++;
	}
	return 0;
}
