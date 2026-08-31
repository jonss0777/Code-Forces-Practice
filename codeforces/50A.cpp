
// Problem 50A
#include <iostream>
using namespace std;


int main(){
    
    int M, N;
    cin >> M >> N;
    // Original Approach 
    // Simulating the domino table
    // Fill in [i][j] and [i][j+1] or [i][j] and [i][i+1]
    // Skip filled boxes.
    // Cons: this approach creates unnecesary overhead


    // Simpler approach
    // note every domino is 2X1 
    // Divide the area/2
    
    cout << (M*N) / 2 << "\n";
    
    return 0;
}