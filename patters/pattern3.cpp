#include<iostream>
using namespace std;
int main() {
    int i,j;
    int n;
    cin >> n;
    cout << endl;

    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            cout << j;
        }
        cout << endl;
    }

    // REVERSE LOOP

    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            cout << n-j+1;
        }
        cout << endl;
    }
}