#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int p;
        p = n - i + 1;
        while (j <= p)
        {
            cout << j;
            j++;
        }

        while (j <= n)
        {
            cout << "*";
            j++;
        }

        int start;
        start = i - 1;
        while (start)
        {
            cout << "*";
            start--;
        }

        int end;
        end = i;
        int q;
        q = n - i + 1;
        while (end <= n)
        {
            cout << q;
            q--;
            end++;
        }

        cout << endl;
        i++;
    }
}