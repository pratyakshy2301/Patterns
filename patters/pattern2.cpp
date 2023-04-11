#include<iostream>
using namespace std;

int main() {
    int i;
    int j;

    int n;
    cin >> n;
    cout << endl;

    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            cout << i;
        }
        cout << endl;
    }


    /*while(i<=n) {
        while(j<=n) {
            cout << i << endl;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }*/
}
