                                
#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int cnt = (int)(log10(n)+1);

    return cnt;
}




int main() {
    int N = 393;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}
                                
                            