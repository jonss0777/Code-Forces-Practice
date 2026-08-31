// Problem 617A


#include <iostream>
using namespace std;

int main(){
    int input, count = 0;
    cin >> input;
    // A more optimized approach would use %
    for(int i = 5; i > 0; i--){
        while(input - i >= 0){
            input -= i;
            count++;
        }
        if(input == 0){
            break;
        }
    }

    cout << count << "\n";
    return 0;
}