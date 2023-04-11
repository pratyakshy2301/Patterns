#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char ch = 'A';
    int i = 1;
    char p;
    while(i<=n) {
        int j = 1;
        while(j<=n) {
            p = ch+j-1;
            cout << p;
            j = j+1;
        }
        cout << endl;
        i = i+1;
        ch = ch+1;
    }
}