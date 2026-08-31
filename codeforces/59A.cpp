// Problem 59 A

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    int freq[2] = {0};

    string input;
    cin >> input;

    for(int i = 0; i < input.length(); i++){
        if(input[i] >= 'a' && input[i] <= 'z' ){
            freq[0]++;
        }
        else{
            freq[1]++;
        }
    }

    if(freq[0] == freq[1] || freq[0] > freq[1] ){
        transform(input.begin(), input.end(), input.begin(), [](unsigned char c){
            return static_cast<char>(std::tolower(c));
        });
    }
    else{
        transform(input.begin(), input.end(), input.begin(), [](unsigned char c){
            return static_cast<char>(toupper(c));
        });
    }
    cout << input << "\n";

    return 0;
}

