#include <iostream>
using namespace std;

long long factorial(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    return factorial(n-1)*n;
}

int main()
{
    int N;
    cin >> N;
    cout << factorial(N);
    return 0;
}
