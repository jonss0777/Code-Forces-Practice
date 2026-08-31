// Problem 734A

#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    string s;
    int freq[2] = {0};
    cin >> n;
    cin >> s;

    for(int i = 0; i < n; i++){
        if (s[i] == 'A'){
            freq[0]++;
        }   
        else{
            freq[1]++;
        }
    }

    if(freq[0] == freq[1]){
        cout << "Friendship" << "\n";
    }
    else if(freq[0] > freq[1]){
        cout << "Anton" << "\n";
    }
    else{
        cout << "Danik" << "\n";
    }

    return 0;
}