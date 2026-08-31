// Problem 266A

// Looks like a sliding window problem

#include <iostream>
#include <string>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size, count = 0;
    string input;

    cin >> size;
    cin >> input;

    /*
    if(size == 1){
        cout <<  count <<  "\n";
    } else{
        int left = 0, right;
        for(right = left+1; right < size; right++){
            if(input[left] == input[right]){
                count++;
            }else{
                left = right;
            }
        }
    }

    */
   // Simpler approach

   for(int i = 0; i < size-1; i++){
        if(input[i] == input[i +1]){
            count++;
        }
   }

    cout << count << "\n";
    return 0;
}