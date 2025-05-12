#include <iostream>
#include <queue>
using namespace std;

int N, K;

int main() {
    queue<int> q;
    cin >> N >> K;
    for(int i=1;i<=N;i++)
    q.push(i);
    while(q.empty()!=true)
    {
        for(int i=0;i<K;i++)
        {
            if(i!=K-1)
            {
                q.push(q.front());
            }
            if(i==K-1)
            cout << q.front() << " ";
            q.pop();
        }
    }
    return 0;
}
