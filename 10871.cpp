#include <iostream>
using namespace std;
int N[10000];

int main()
{
    int n;
    int A;
    cin >> n >> A;
    for(int i=0;i<n;i++)
    {
        cin >> N[i];
    }
    for(int i=0;i<n;i++)
    {
        if(A>N[i])
            cout << N[i] << " ";
    }
    return 0;
}
