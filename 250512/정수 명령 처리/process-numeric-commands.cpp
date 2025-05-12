#include <iostream>
#include <stack>
using namespace std;

int N;
string command;
int c;

int main() {
    cin >> N;
    stack<int> s;
    for (int i = 0; i < N; i++) {
        cin >> command;
        if(command=="push")
        {
            cin >> c;
            s.push(c);
        }
        else if(command=="pop")
        {
            cout << s.top() << endl;
            s.pop();
        }
        else if(command=="size")
        cout << s.size() << endl;
        else if(command=="empty")
        cout << s.empty() << endl;
        else
        cout << s.top() << endl;
    }
    return 0;
}
