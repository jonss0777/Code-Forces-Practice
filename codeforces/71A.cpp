// Problem 71A

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string input;
        cin >> input; 

        int size = input.length();
        if(size > 10){
            cout << input.front() << size-2 << input.back() << endl;    
        }
        else{
            cout << input << endl;
        }
    }
   
    return 0;
}