#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i,j;
   
    for(i=1;i<=n;i++) {
        char ch = 'A';
        for(j=1;j<=n;j++) {
            cout << ch << " ";
            ch = ch+1;
        }
        ch = ch+1;
        cout << endl;
    }
}