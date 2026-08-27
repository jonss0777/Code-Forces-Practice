// Problem 110A

#include <iostream>
#include <string>
using namespace std;

int main(){
    int luckyNumer = 0;
    string input;
    cin >> input;

    for(int i = 0; i < input.length(); i++){
        if(input[i] == '7' || input[i] == '4'){
           luckyNumer++;
        }
    }

    if(luckyNumer == 4 || luckyNumer == 7){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }

    return 0;
}