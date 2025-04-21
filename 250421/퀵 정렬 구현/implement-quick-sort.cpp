#include <iostream>

using namespace std;

int n;
int arr[100000];

int ps(int arr[],int low,int high)
{
    int pivot = arr[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i+=1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void pq(int arr[],int low,int high)
{
    if(low<high)
    {
        int pos=ps(arr,low,high);
        pq(arr,low,pos-1);
        pq(arr,pos+1,high);
    }
}
int main() {
    cin >> n;
    int low=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    pq(arr,low,n-1);
    for(int i=0;i<n;i++)
    cout << arr[i] << " ";
    return 0;
}
