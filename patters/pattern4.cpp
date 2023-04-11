#include<iostream>
using namespace std;
int main() {
    int i,j;
    int n;
    cin >> n;
    int sum = 1;

    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            cout << sum;
            sum = sum+1;
        }
        cout << endl;
    }
}