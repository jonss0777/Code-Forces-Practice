// Problem 236.cpp

#include <iostream>
#include <set>
using namespace std;

int main(){
    set<char> unique;
    string input;
    cin >> input;

    for(int i = 0; i < input.length(); i++){
        unique.insert(input[i]);
    }

    if(unique.size()%2 == 0){
        cout << "CHAT WITH HER!" << "\n";
    }
    else{
        cout << "IGNORE HIM!" << "\n";
    }
    return 0;
}