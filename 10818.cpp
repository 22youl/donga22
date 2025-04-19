#include <iostream>
using namespace std;
int N[1000000];

int main()
{
    int min;
    int max;
    int n;
    cin >> n;
    for(long long i=0;i<n;i++)
    {
        cin >> N[i];
        if(i==0)
        {
            max=N[0];
            min=N[0];
        }
        min=(min<=N[i])?min:N[i];
        max=(max>=N[i])?max:N[i];
    }
    cout << min << ' ' << max <<endl;
    return 0;
}
