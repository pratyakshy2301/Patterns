#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch = 'A';
    int i,j;
    char p;
    for(i=1;i<=n;i++) {
        p = ch + i -1;
        for(j=1;j<=n;j++) {
            cout << p << " ";
            p = p+1;

        }
        cout << endl;
    }
}