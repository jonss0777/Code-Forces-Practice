// Problem 263A

// Algorithm 
// Find where the 1 is located (i,j)
// distance from (3,3) vertically and horizontally
// print ver + hor 

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
  
    int read, x, y;

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> read;
            if(read == 1){
                x = j;
                y = i;
            }
        }
    }

    cout << abs(x-3) + abs(y-3) << "\n";
    return 0;
}