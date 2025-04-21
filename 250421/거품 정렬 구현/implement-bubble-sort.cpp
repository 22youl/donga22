#include <iostream>

using namespace std;

int n;
int arr[100];

void bubble_sort(int arr[],int n)
{
    int sorted=true;
    int size=n;
    do{
        sorted=true;
        for(int i=0;i<size-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int tmp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
                sorted=false;
            }
        }
    }while(!sorted);
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    cout << arr[i] << " ";
    return 0;
}
