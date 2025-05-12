#include <iostream>
#include <string>
#include <queue>
using namespace std;

int N;
string command;

int main() {
    cin >> N;
    queue<int> q;
    for (int i = 0; i < N; i++) {
        cin >> command;
        if(command=="push")
        {
            int a;
            cin >> a;
            q.push(a);
        }
        else if(command=="pop")
        {
            cout << q.front() << endl;
            q.pop();
        }
        else if(command=="size")
        cout << q.size() << endl;
        else if(command=="empty")
        cout << q.empty() << endl;
        else
        cout << q.front() << endl;
    }
    return 0;
}