#include<iostream>
using namespace std;
int main() {
    int i = 1;
    int j = 1;
    int n;
    cin >> n;

    // FOR LOOP
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            cout << "*";
        }
        cout << endl;
    }

    // WHILE LOOP

    /*while(i<=n){
        while(j<=n){
            cout << "*";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }*/
}