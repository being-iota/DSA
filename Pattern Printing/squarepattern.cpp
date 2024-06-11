#include<iostream>
using namespace std;

int main() {
    int n = 10;

    for(int row =0; row < n; row = row + 1){
        for(int col = 0; col < n; col = col + 1){
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}