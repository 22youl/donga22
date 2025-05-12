#include <iostream>
#include <string>
#include <deque>
using namespace std;

int N;
string cmd;


int main() {
    cin >> N;
    deque<int> s;
    for (int i = 0; i < N; i++) {
        cin >> cmd;
        if(cmd=="push_front")
        {
            int A;
            cin >> A;
            s.push_front(A);
        }
        else if(cmd=="push_back")
        {
            int A;
            cin >> A;
            s.push_back(A);
        }
        else if(cmd=="pop_front")
        {
            cout << s.front() << endl;
            s.pop_front();
        }
        else if(cmd=="pop_back")
        {
            cout << s.back() << endl;
            s.pop_back();
        }
        else if(cmd=="size")
        cout << s.size() << endl;
        else if(cmd=="empty")
        cout << s.empty() << endl;
        else if(cmd=="front")
        cout << s.front() << endl;
        else
        cout << s.back() << endl;
    }
    return 0;
}
