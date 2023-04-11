#include<iostream>
using namespace std;
int main() {
    int n;
    cin>> n;
    int i=1;
    while(i<=n) {
        int j=1;
        int space;
        space = i-1;
        while(space) {
            cout << " ";
            space--;
        }
        int p = n-i+1;
        while(j<=p){
            cout << "*";
            j++;
        }
        cout << endl; 
        i++;
    }
}