#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i,j,count=1;
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            cout << count<< " ";
            count = count+1;
        }
        cout << endl;
    }
}