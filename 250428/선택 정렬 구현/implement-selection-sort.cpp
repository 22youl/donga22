#include <iostream>

using namespace std;

int n;
int arr[100];
void ps(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minimum=i;
        for(int k=i+1;k<n;k++)
        {
            if(arr[k]<arr[minimum])
            {
                minimum=k;
            }
        }
        swap(arr[i],arr[minimum]);
    }
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ps(arr,n);
    for(int i=0;i<n;i++)
    cout << arr[i] << " ";
    return 0;
}
