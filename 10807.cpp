#include <iostream>
using namespace std;
int N[10000];

int main()
{
    int n;
    int c;
    int count=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> N[i];
    }
    cin >> c;
    for(int i=0;i<n;i++)
    {
        if(c==N[i])
        {
            count+=1;
        }
    }
    cout << count;
    return 0;
}
