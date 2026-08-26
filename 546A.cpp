// Problem 546A

#include <iostream>
using namespace std;

int main(){

    int k, n, w;
    cin >> k >> n >> w;
    // k, 2k, 3k ,... 
    // k(1 + 2 +3 ...)
    // k[(p(p+1))/2] = m0
    // abs(m0-n) = amount to borrow = m1
    // cout << m1 << "\n";

    int cost =  k*( (w * (w + 1)) / 2);
    int amountToBorrow = 0;
    if (cost > n){
        amountToBorrow = cost -n;
    }
    cout << amountToBorrow << "\n";
    return 0;
}