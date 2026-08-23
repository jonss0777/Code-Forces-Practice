// Problem 158A

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n, k, count = 0;
    cin >> n >> k;
    vector<int> inputs(n);

   
    for(int i = 0; i < n; i++){
        cin >> inputs[i];
    }

    for(int i = 0; i< n; i++){   
        if(inputs[i] >= inputs[k-1] && inputs[i]> 0){
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}