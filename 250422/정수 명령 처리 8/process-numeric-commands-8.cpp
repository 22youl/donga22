#include <iostream>
#include <string>
#include <list>

using namespace std;

int N;
string command;

int main() {
    cin >> N;
    list <int> l;
    for (int i = 0; i < N; i++) {
        cin >> command;
        if(command=="push_front")
        {
            int i;
            cin >> i;
            l.push_front(i);
        }
        else if(command=="push_back")
        {
            int i;
            cin >> i;
            l.push_back(i);
        }
        else if(command=="pop_front")
        {
            cout << l.front() << endl;
            l.pop_front();
        }
        else if(command=="pop_back")
        {
            cout << l.back() << endl;
            l.pop_back();
        }
        else if(command=="size")
        {
            cout << l.size() << endl;
        }
        else if(command=="empty")
        {
            cout << l.empty() << endl;
        }
        else if(command=="front")
        cout << l.front() << endl;
        else
        cout << l.back() << endl;
    }

    // Please write your code here.

    return 0;
}
