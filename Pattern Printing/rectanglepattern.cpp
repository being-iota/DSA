#include<iostream>
using namespace std;

int main(){
    int n = 5; 
    for(int row = 0; row < n; row = row + 1){
        for (int col = 0; col < (n+2); col = col + 1){
            cout << "*";
        }
        cout << endl; 
    }
    return 0;
}
