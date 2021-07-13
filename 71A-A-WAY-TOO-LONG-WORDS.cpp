#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; //Enter the number of strings
    string str;

    while (n--)
    {
        cin >> str;

        if (str.length() > 10)
        {
            cout << str.front() << str.length() - 2 << str.back() << endl;
        }
        else
        {
            cout << str << endl;
        }
    }

    return 0;
}