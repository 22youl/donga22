#include <iostream>
#include <stack>
using namespace std;

char str;

int main() {
    stack<char> s;
    bool result;
    while(cin >> str)
    {
        if(str=='(')
        {
            s.push('(');
            result=false;
        }
        else
        {
            if(s.empty()==false)
            s.pop();
            if(s.empty()==true)
            {
                result=true;
            }
            else
            result=false;
        }
    }
    if(result==true)
    cout << "Yes";
    if(result==false)
    cout << "No";
    return 0;
}
